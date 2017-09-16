#include "arrayutil.h"
#include "data.h"
#include <iostream>
#include <list>


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

// Versuch 2 Ignoriert negativ Zahlenwerte
/*
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

	//values an Data array übergeben, Wert & Pos speichern
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


	return result < INT_MAX ? result : result=0;

}
*/


//Versuch 3 inkl. Negativen zahlenwerte (list)
int ArrayUtil::highestProduct(int *values, const int ARRAY_SIZE)
{
	int result(0);
	int helper(1);

	std::list<int> negativ_list;
	std::list<int> positiv_list;
	std::list<int>::iterator positiv_it;
	std::list<int>::iterator negativ_it;
	//================================================

	//values in Liste übergeben
	for(int index = 0; index < ARRAY_SIZE; index++){
		if(values[index] < 0){
			negativ_list.push_back(values[index]);
		}else if(values[index] > 0)
		{
			positiv_list.push_back(values[index]);
		}
	}

	positiv_list.sort(std::greater<int>());
	negativ_list.sort();

	positiv_it = positiv_list.begin();
	negativ_it = negativ_list.begin();

	if(negativ_list.size() > 2){
		if((*negativ_it + *positiv_it)<0){
			for(int i(0); i <2;i++){
				helper *= *negativ_it;
				++negativ_it;
			}
			result = helper * *positiv_it;
		}else{
			for(int i(0); i <3;i++){
				helper *= *positiv_it;
				++positiv_it;
			}
			result = helper;
		}
	}else{
		for(int i(0); i <3;i++){
			helper *= *positiv_it;
			++positiv_it;
		}
		result = helper;
	}


//	for(negativ_it = negativ_list.begin(); negativ_it != negativ_list.end();negativ_it++){
//		std::cout<<"Negativwert: "<<*negativ_it<<std::endl;
//	}
//	std::cout<<std::endl;
//	for(positiv_it = positiv_list.begin(); positiv_it != positiv_list.end();positiv_it++){
//		std::cout<<"Positivwert: "<<*positiv_it<<std::endl;
//	}
	return result;

}


