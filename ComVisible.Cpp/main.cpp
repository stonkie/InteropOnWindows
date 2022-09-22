
#include <atlcomcli.h>
#include <iostream>
#include <OleCtl.h>

MIDL_INTERFACE("fe7b93df-048c-40bb-ba50-e9bd0e3ea1ba")
IVeryClassy : public IUnknown
{
public:
    virtual HRESULT __stdcall PlusOne(int input, int *output) = 0;
};

class __declspec(uuid("{0a2784c8-3eb1-4566-9f7f-9b4fbe2800bf}")) VeryClassy : public IVeryClassy
{
};


int main()
{
	const HRESULT initResult = CoInitializeEx(nullptr, COINIT_MULTITHREADED);

	std::cout << "Init : " << initResult << "\r\n";

	if (initResult != S_OK) return initResult;
	
	CComPtr<IVeryClassy> classy;
	const HRESULT createResult = classy.CoCreateInstance(__uuidof(VeryClassy));

	std::cout << "Create : " << createResult << "\r\n";

	if (createResult != S_OK) return createResult;

	int answer = 0;
	const HRESULT operationResult = classy->PlusOne(17, &answer);

	if (operationResult != S_OK) return operationResult;

	std::cout << "Operation : " << createResult << "\r\n";

	std::cout << "And the answer is... " << answer << "\r\n";

	classy.Release();

	return 0;
}
