#ifndef RESULT_H
#define RESULT_H
#include <iostream>
#include "debug.h"

class Result
{
	public:
		int nPositive;
		int nZero;
		int nNegative;

		Result();

		friend std::ostream & operator<<(std::ostream & stream, const Result & obj)
		{
			stream <<"Negativ: \t"<< obj.nNegative << std::endl;
			stream <<"Positiv: \t"<< obj.nPositive << std::endl;
			stream <<"Zero: \t\t"<< obj.nZero << std::endl;

			return stream;
		}
};


#endif // RESULT_H
