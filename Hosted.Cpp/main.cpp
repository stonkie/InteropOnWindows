// Could be copied into our project...
#include <filesystem>
#include <6.0.10\runtimes\win-x64\native\nethost.h>
#include <6.0.10\runtimes\win-x64\native\hostfxr.h>
#include <6.0.10\runtimes\win-x64\native\coreclr_delegates.h>

#include <string>
#include <iostream>
#include <windows.h>

#pragma comment(lib, "6.0.10/runtimes/win-x64/native/nethost.lib")
// Dll is referenced directly and has copy-local

// Inspired by : https://learn.microsoft.com/en-us/dotnet/core/tutorials/netcore-hosting

int main()
{
	// const auto rootPath = std::filesystem::current_path();
    WCHAR launcherPath[MAX_PATH];
	GetModuleFileNameW(NULL, launcherPath, MAX_PATH);

    const std::filesystem::path rootPath{std::filesystem::path(launcherPath).parent_path()};

    char_t path[MAX_PATH];
    size_t size = MAX_PATH;
    const int getHostDllPathResult = get_hostfxr_path(path, &size, nullptr);

    if (getHostDllPathResult != 0) {
	    std::wcout << "Error getting host path : " << getHostDllPathResult;
    	return getHostDllPathResult;
    }
    
    const HMODULE library = LoadLibraryW(path);

    if (library == 0) {
	    std::wcout << L"Library could not be loaded : " << path;
    	return -1;
    }
    
    const auto initializeFunction = reinterpret_cast<hostfxr_initialize_for_runtime_config_fn>(GetProcAddress(
	    library, "hostfxr_initialize_for_runtime_config"));
    
    const auto getRuntimeDelegateFunction = reinterpret_cast<hostfxr_get_runtime_delegate_fn>(GetProcAddress(library, "hostfxr_get_runtime_delegate"));
    const auto closeRuntimeFunction = reinterpret_cast<hostfxr_close_fn>(GetProcAddress(library, "hostfxr_close"));

    const auto configPath = rootPath / L"loader.runtimeconfig.json";

	hostfxr_handle hostHandle;
    const int initializeResult = initializeFunction(configPath.c_str(), nullptr, &hostHandle);

    if (initializeResult != 0) {
	    std::wcout << "Error initializing host : " << initializeResult;
    	return initializeResult;
    }

    load_assembly_and_get_function_pointer_fn loadAssemblyFunction = nullptr;
    const int getRuntimeDelegateResult = getRuntimeDelegateFunction(hostHandle, hdt_load_assembly_and_get_function_pointer, reinterpret_cast<void**>(&loadAssemblyFunction));

    if (getRuntimeDelegateResult != 0)
    {
	    std::wcout << "Error getting runtime delegate : " << getRuntimeDelegateResult;
    	return getRuntimeDelegateResult;
    }

    const auto assemblyPath = rootPath / L"Hosted.CSharp.dll";

    component_entry_point_fn spawn = nullptr;
	const HRESULT getSpawnResult = loadAssemblyFunction(assemblyPath.c_str(), L"Hosted.CSharp.Spawned, Hosted.CSharp", L"Spawn", 
        nullptr, nullptr, reinterpret_cast<void**>(&spawn));

    if (getSpawnResult != 0)
    {
	    std::wcout << "Error getting spawn : " << getSpawnResult;
    	return getSpawnResult;
    }

    std::wcout << "Native is ready to spawn!" << "\r\n";

    spawn(nullptr, 0);
    
    closeRuntimeFunction(hostHandle);

    std::wcout << "Managed spawn has shut down gracefully." << "\r\n";

    return 0;
}
