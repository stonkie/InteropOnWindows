#pragma once

extern "C" __declspec( dllexport )
const wchar_t* Append(const wchar_t* basePtr, wchar_t letter, int times);


extern "C" __declspec( dllexport )
void Free(const wchar_t* stringToFree);