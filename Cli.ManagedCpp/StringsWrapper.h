#pragma once

#include "../Cli.NativeCpp/strings.h"

using System::String;

public ref class StringsWrapper
{
	strings* _strings;

public:
	StringsWrapper();
	~StringsWrapper();

	String^ Append(String^ base, System::Char letter, int times);
};
