#pragma once

#include "../Cli.NativeCpp/maths.h"


public ref class MathsWrapper
{
	maths* _maths;

public:
	MathsWrapper();
	~MathsWrapper();

	int PlusOne(int value);
};

