#include "arrayutil.h"
#include "result.h"


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	Result *result = new Result();
	std::vector<int>::iterator it;
	result->nNegative = 0;
	result->nPositive = 0;
	result->nZero = 0;

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

	std::cout<<"----------------"<<std::endl;
	std::cout<<result<<" in Arrayutil.cpp"<<std::endl;
	std::cout<<"----------------"<<std::endl;

	return *result;

}
