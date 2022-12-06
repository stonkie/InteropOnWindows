#include "StringsWrapper.h"

#include <msclr/marshal_cppstd.h>

using msclr::interop::marshal_as;

StringsWrapper::StringsWrapper()
	: _strings(new strings())
{
}

StringsWrapper::~StringsWrapper()
{
	delete _strings;
}

String^ StringsWrapper::Append(String^ base, System::Char letter, int times)
{
    auto nativeBase = marshal_as<std::wstring>(base);

	const std::wstring result = 
		_strings->append(nativeBase, letter, times);

	return gcnew String(result.c_str());
}
