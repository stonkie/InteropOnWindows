#include "StringsWrapper.h"

#include <msclr/marshal_cppstd.h>



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
	const std::wstring result = _strings->append(msclr::interop::marshal_as<std::wstring>(base), letter, times);

	return gcnew String(result.c_str());
}
