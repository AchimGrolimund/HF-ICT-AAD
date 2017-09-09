#include "arrayutil.h"




int ArrayUtil::highestProduct(int *values, const int ARRAY_SIZE)
{
	int value1(0),value2(0),value3(0);

	for(int i = 0;i<ARRAY_SIZE;i++){
		if(values[i] > value1){
			value1 = values[i];
		}
	}
	for(int i = 0;i<ARRAY_SIZE;i++){
		if(values[i] > value2 && values[i] < value1){
			value2 = values[i];
		}
	}
	for(int i = 0;i<ARRAY_SIZE;i++){
		if(values[i] > value3 && values[i] < value1 && values[i] < value2){
			value3 = values[i];
		}
	}


		return (value1*value2*value3);
	}
