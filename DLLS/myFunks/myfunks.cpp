#include "myfunks.h"

#include <random>
#include <time.h>


template<class T>
T MyFunks::fillRandArray(T *array, const unsigned int ARRAY_SIZE,T minVal, T maxVal)
{
	srand(static_cast<unsigned>(time(NULL)));
	if(minVal < 0){
		for(unsigned int i(0); i < ARRAY_SIZE; i++){
			array[i] = rand() % maxVal + minVal;
		}
	}else{
		for(unsigned int i(0); i < ARRAY_SIZE; i++){
			array[i] = rand() % maxVal - minVal;
		}
	}
}
