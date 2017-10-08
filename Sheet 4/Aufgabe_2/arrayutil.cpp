#include "arrayutil.h"
#include "result.h"
#include "debug.h"
#include <iostream>


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	// <-- Debug Ausgabe -->
	dout("----------------\n");
	dout("in analyseArray");
	dout("----------------\n");

	Result result;
	std::vector<int>::iterator it;


	// <-- Durch den input vector Iterieren -->
	for(it=input.begin();it != input.end(); it++){
		if(*it < 0){
			result.nNegative += 1;
		}
		else if (*it > 0) {
			result.nPositive += 1;
		}else {
			result.nZero += 1;
		}
	}

	return result;

}

void ArrayUtil::printArray(Result &input, unsigned int inputSize)
{
	// <-- Debug Ausgabe -->
	dout("----------------\n");
	dout("in printArray");
	dout("----------------\n");

	// <-- Ausgabe Result Obj -->
	std::cout<<input<<std::endl;

	// <-- Ausgabe % Werte vom Result Obj -->
	std::cout.precision(3);
	std::cout<<"nPositive: \t"<< (static_cast<float>(input.nPositive)/inputSize)*100 <<"%"<<std::endl;
	std::cout<<"nZero: \t\t"<< (static_cast<float>(input.nZero)/inputSize)*100 <<"%"<<std::endl;
	std::cout<<"nNegative: \t"<< (static_cast<float>(input.nNegative)/inputSize)*100 <<"%"<<std::endl;

}
