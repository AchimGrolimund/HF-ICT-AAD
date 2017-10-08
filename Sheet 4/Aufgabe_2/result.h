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
		~Result();
		//Result(const Result & obj);
		Result operator= (const Result & obj);

		friend std::ostream & operator<<(std::ostream & stream, const Result & obj);

};

std::ostream & operator<<(std::ostream & stream, const Result & obj){
	dout("frind ostream \n");
	stream <<"Negativ: "<< obj.nNegative << std::endl;
	stream <<"Positiv: "<< obj.nPositive << std::endl;
	stream <<"Zero: "<< obj.nZero << std::endl;

	return stream;
}
#endif // RESULT_H
