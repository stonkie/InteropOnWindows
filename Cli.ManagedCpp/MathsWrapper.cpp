#include "MathsWrapper.h"

MathsWrapper::MathsWrapper()
	: _maths(new maths())
{
}

MathsWrapper::~MathsWrapper()
{
	delete _maths;
}

int MathsWrapper::PlusOne(int value)
{
	return _maths->plus_one(value);
}
