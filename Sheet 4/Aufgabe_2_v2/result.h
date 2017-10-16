#ifndef RESULT_H
#define RESULT_H
#include <iostream>

class Result
{
	public:
		int nPositive;
		int nZero;
		int nNegative;

		Result();

		friend std::ostream & operator<<(std::ostream & stream, const Result & obj)
		{

			int inputSize(0);
			inputSize = obj.nNegative + obj.nPositive + obj.nZero;

			stream <<"nPositive: \t"<< (static_cast<float>(obj.nPositive)/inputSize)*100 <<"%"<<std::endl;
			stream <<"nZero: \t\t"<< (static_cast<float>(obj.nZero)/inputSize)*100 <<"%"<<std::endl;
			stream <<"nNegative: \t"<< (static_cast<float>(obj.nNegative)/inputSize)*100 <<"%"<<std::endl;

			return stream;
		}
};


#endif // RESULT_H
