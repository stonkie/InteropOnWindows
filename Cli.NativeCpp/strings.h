#pragma once

#include <string>
#include <string_view>

class strings
{
public:
	const std::wstring append(const std::wstring_view baseView, wchar_t letter, int times);
};

