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

		friend std::ostream & operator<<(std::ostream & stream, const Result & obj)
		{
			dout("frind ostream \n");
			stream <<"Negativ: "<< obj.nNegative << std::endl;
			stream <<"Positiv: "<< obj.nPositive << std::endl;
			stream <<"Zero: "<< obj.nZero << std::endl;

			return stream;
		}

};





#endif // ARRAYUTIL_H
