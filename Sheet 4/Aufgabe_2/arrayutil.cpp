#include "arrayutil.h"
#include "result.h"
#include "debug.h"


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	Result *result = new Result();
	std::vector<int>::iterator it;

	// <-- Alles auf 0 Setzen -->
	result->nNegative = 0;
	result->nPositive = 0;
	result->nZero = 0;

	// <-- Durch den input vector Iterieren -->
	for(it=input.begin();it != input.end(); it++){
		if(*it < 0){
			result->nNegative += 1;
		}
		else if (*it > 0) {
			result->nPositive += 1;
		}else {
			result->nZero += 1;
		}
	}

	// <-- Debug Ausgabe -->
	dout("----------------\n");
	dout(result);
	dout("\nin Arrayutil.cpp");
	dout("----------------\n");

	return *result;

}
