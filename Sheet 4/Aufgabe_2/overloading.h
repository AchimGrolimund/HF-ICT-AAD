#ifndef OVERLOADING_H
#define OVERLOADING_H
#include "result.h"
#include <iostream>

class overloading
{
	public:
		friend std::ostream & operator<<(std::ostream & stream, const Result & obj){
			stream <<"Negativ: "<< obj.nNegative << std::endl;
			stream <<"Positiv: "<< obj.nPositive << std::endl;
			stream <<"Zero: "<< obj.nZero << std::endl;

			return stream;
		}
};

#endif // OVERLOADING_H
