#ifndef ARRAYUTIL_H
#define ARRAYUTIL_H

#include "debug.h"
#include "result.h"
#include <vector>
#include <iostream>

class ArrayUtil
{
	public:
		static Result analyseArray(std::vector<int> input);
		static void printArray(Result &input, unsigned int inputSize);

};


#endif // ARRAYUTIL_H
