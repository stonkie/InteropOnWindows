#define WIN32_LEAN_AND_MEAN

#include <atlbase.h>
#include <Windows.h>


class MathsModule : public CAtlDllModuleT<MathsModule>
{
public :
	//DECLARE_LIBID(LIBID_WizardComCppLib)
	//DECLARE_REGISTRY_APPID_RESOURCEID(IDR_WIZARDCOMCPP, "{0c72d0b6-61fa-419a-bf83-6164a296cd71}")
};

MathsModule _AtlModule;


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
)
{
    return TRUE;
}

STDAPI DllCanUnloadNow(void)
{
    return _AtlModule.DllCanUnloadNow();
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return _AtlModule.DllGetClassObject( rclsid, riid, ppv );
}

STDAPI DllRegisterServer(void)
{
    return _AtlModule.DllRegisterServer();
}

STDAPI DllUnregisterServer(void)
{
    return _AtlModule.DllUnregisterServer();
}