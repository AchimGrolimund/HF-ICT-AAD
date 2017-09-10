#include "arrayutil.h"
#include "data.h"
#include <iostream>


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
	int result;

	Data array[ARRAY_SIZE];

	//Data array abfüllen mit Defaultwerten
	for(int i = 0; i < ARRAY_SIZE; i++){
		array[i].pos = -1;
		array[1].wert = 0;
	}

	//values an Data array übergeben und Wert & Pos speichern
	for(int index = 0; index < ARRAY_SIZE; index++){
		array[index].pos = index;
		array[index].wert = values[index];
	}

	//Suche grössten wert für value1
	for(int j = 0;j<ARRAY_SIZE;j++){
		if(array[j].wert > value1){
			value1 = array[j].wert;
			pos1 = array[j].pos;
		}
	}
	std::cout<<"pos1: "<<pos1<<" Wert: "<<value1<<std::endl;

	//Suche grössten wert für value2 && <> pos wie value1
	for(int j = 0;j<ARRAY_SIZE;j++){
		if(array[j].wert > value2 && j != pos1){
			value2 = array[j].wert;
			pos2 = array[j].pos;
		}
	}
	std::cout<<"pos2: "<<pos2<<" Wert: "<<value2<<std::endl;

	//Suche grössten wert für value3 && <> pos wie value1 & 2
	for(int j = 0;j<ARRAY_SIZE;j++){
		if(array[j].wert > value3 && j != pos2 && j != pos1){
			value3 = array[j].wert;
			pos3 = array[j].pos;
		}
	}
	std::cout<<"pos3: "<<pos3<<" Wert: "<<value3<<std::endl;

	result = (value1*value2*value3);


	return result > INT_MAX ? 0 : result;

}

