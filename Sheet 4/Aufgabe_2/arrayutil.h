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

		ArrayUtil  operator= (const ArrayUtil & obj){
			dout("= Operator\n");
		}

		friend std::ostream & operator<<(std::ostream & stream, const Result & obj){
			dout("Frind ostream:\n");
			stream <<"Negativ: "<< obj.nNegative << std::endl;
			stream <<"Positiv: "<< obj.nPositive << std::endl;
			stream <<"Zero: "<< obj.nZero << std::endl;

			return stream;
		}
};

#endif // ARRAYUTIL_H
