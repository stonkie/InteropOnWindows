#include "strings.h"

#include <iostream>
#include <ostream>


extern "C" __declspec( dllexport )
const wchar_t* Append(const wchar_t* basePtr, wchar_t letter, int times)
{
    const std::wstring_view baseWiew(basePtr);

	const auto result = new wchar_t[baseWiew.length() + times + 1];
	const auto afterBasePosition = std::ranges::copy(baseWiew, result).out;
    const auto nullCharPosition = std::ranges::fill_n(afterBasePosition, times, letter);
    nullCharPosition[0] = L'\0';
    
    std::wcout << "Natively : " << result << std::endl << std::endl;

    return result;
}

extern "C" __declspec( dllexport )
void Free(const wchar_t* stringToFree)
{
	delete stringToFree;
}