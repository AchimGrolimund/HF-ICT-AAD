#include "arrayutil.h"
#include "result.h"


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	Result result;
	std::vector<int>::iterator it;

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
