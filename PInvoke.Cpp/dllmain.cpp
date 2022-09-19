#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <mutex>
#include <Windows.h>

std::once_flag setLocalOnceFlag;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    std::call_once(setLocalOnceFlag, [] { std::setlocale(LC_CTYPE, ""); });
    
    return TRUE;
}
