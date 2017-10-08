#ifndef ARRAYUTIL_H
#define ARRAYUTIL_H

#define DEBUG //Bei Release auskommentieren!!
#ifdef DEBUG
#define dout(str) do { std::cout << str << std::endl; } while( false )
#else
#define dout(str) do { } while ( false )
#endif

#include "result.h"
#include <vector>
#include <iostream>

class ArrayUtil
{
	public:
		static Result analyseArray(std::vector<int> input);

};



#endif // ARRAYUTIL_H
