// Could be copied into our project...
#include <6.0.6\runtimes\win-x64\native\nethost.h>
#include <6.0.6\runtimes\win-x64\native\hostfxr.h>
#include <6.0.6\runtimes\win-x64\native\coreclr_delegates.h>

#include <string>
#include <iostream>
#include <windows.h>

#pragma comment(lib, "6.0.6/runtimes/win-x64/native/nethost.lib")
// Dll is referenced directly and has copy-local

// Inspired by : https://learn.microsoft.com/en-us/dotnet/core/tutorials/netcore-hosting

int main()
{
    char_t path[1024];
    size_t size = 1024;
    const int getHostDllPathResult = get_hostfxr_path(path, &size, nullptr);

    if (getHostDllPathResult != 0) {
	    std::cout << "Error getting host path : " << getHostDllPathResult;
    	return getHostDllPathResult;
    }
    
    const HMODULE library = LoadLibraryW(path);

    const auto initializeFunction = reinterpret_cast<hostfxr_initialize_for_runtime_config_fn>(GetProcAddress(
	    library, "hostfxr_initialize_for_runtime_config"));
    
    const auto getRuntimeDelegateFunction = reinterpret_cast<hostfxr_get_runtime_delegate_fn>(GetProcAddress(library, "hostfxr_get_runtime_delegate"));
    const auto closeRuntimeFunction = reinterpret_cast<hostfxr_close_fn>(GetProcAddress(library, "hostfxr_close"));

	hostfxr_handle hostHandle;
    const int initializeResult = initializeFunction(L"C:/github/InteropOnWindows/x64/Debug/loader.runtimeconfig.json", nullptr, &hostHandle);

    if (initializeResult != 0) {
	    std::cout << "Error initializing host : " << initializeResult;
    	return initializeResult;
    }

    load_assembly_and_get_function_pointer_fn loadAssemblyFunction = nullptr;
    const int getRuntimeDelegateResult = getRuntimeDelegateFunction(hostHandle, hdt_load_assembly_and_get_function_pointer, reinterpret_cast<void**>(&loadAssemblyFunction));

    if (getRuntimeDelegateResult != 0)
    {
	    std::cout << "Error getting runtime delegate : " << getRuntimeDelegateResult;
    	return getRuntimeDelegateResult;
    }

    component_entry_point_fn spawn = nullptr;
	const HRESULT getSpawnResult = loadAssemblyFunction(L"C:/github/InteropOnWindows/x64/Debug/Hosted.CSharp.dll", L"Hosted.CSharp.Spawned, Hosted.CSharp", L"Spawn", 
        nullptr, nullptr, reinterpret_cast<void**>(&spawn));

    if (getSpawnResult != 0)
    {
	    std::cout << "Error getting spawn : " << getSpawnResult;
    	return getSpawnResult;
    }

    std::cout << "Native is ready to spawn!" << "\r\n";

    spawn(nullptr, 0);
    
    closeRuntimeFunction(hostHandle);

    std::cout << "Managed spawn has shut down gracefully." << "\r\n";

    return 0;
}
