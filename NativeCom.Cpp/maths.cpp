#include "maths.h"


HRESULT Maths::PlusOne(int input, int* output)
{
	*output = input + 1;
	return S_OK;
}
