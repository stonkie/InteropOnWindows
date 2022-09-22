#include "strings.h"

#include <iostream>
#include <ostream>
#include <string>


const std::wstring strings::append(const std::wstring_view baseView, wchar_t letter, int times)
{
    std::wstring result;
    result.reserve(baseView.length() + times);

    result.append(baseView);
    result.append(std::wstring(times, letter));
    
    std::wcout << "Natively : " << result << "\r\n" << "\r\n";

    return result;
}
