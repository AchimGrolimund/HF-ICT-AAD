#include "arrayutil.h"
#include "data.h"


// Versuch 1 (zählt die Doppelten nicht)
/*
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
*/

int ArrayUtil::highestProduct(int *values, const int ARRAY_SIZE)
{
	int value1(0),value2(0),value3(0);
	int pos1(0),pos2(0),pos3(0);

	Data array[ARRAY_SIZE];
	for(int i = 0; i < ARRAY_SIZE; i++){
		array[i].pos = -1;
		array[1].wert = 0;
	}

	for(int index = 0; index < ARRAY_SIZE; index++){
		array[index].pos = index;
		array[index].wert = values[index];
	}

	for(int j = 0;j<ARRAY_SIZE;j++){
		if(array[j].wert > value1){
			value1 = array[j].wert;
			pos1 = array[j].pos;
		}
		if(array[j].wert > value2 && j != pos1 ){
			value2 = array[j].wert;
			pos2 = array[j].pos;
		}
		if(array[j].wert > value3 && j != pos2 && j != pos1){
			value3 = array[j].wert;
			pos3 = array[j].pos;
		}
	}

	return (value1*value2*value3);
}
