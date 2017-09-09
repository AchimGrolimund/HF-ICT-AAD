#include <iostream>
#include <random>
#include <time.h>

#include "data.h"
#include "trader.h"

using namespace std;

int Trader::calculateMaxProfit(const int *values, const int ARRAY_SIZE)
{
	int divWert;
	Data array[2];
	//minimalwert
	array[0].pos =0;
	array[0].wert = 999999999;

	//maximalwert
	array[1].pos=-1;
	array[1].wert=0;

	//Suchen nach dem Kleinsten Wert
	for(int i = 0; i < ARRAY_SIZE; i++){
		if(values[i] < array[0].wert){
			array[0].wert = values[i];
			array[0].pos = i;
		}
	}
	cout<<"gekauft bei:\t "<<array[0].wert<<" CHF"<< " | pos: "<< array[0].pos<<endl;

	//Suchen nach dem grössten Wert nach dem Kleinsten
	for(int j = array[0].pos; j < ARRAY_SIZE; j++){
		if(values[j] > array[1].wert){
			array[1].wert = values[j];
			array[1].pos = j;
		}
	}
	cout<<"verkauft bei:\t "<<array[1].wert<<" CHF"<< " | pos: "<< array[1].pos<<endl;

	divWert = (array[1].wert - array[0].wert);
	return divWert;
}

int *Trader::fillTraderScale(int maxTime)
{
	srand(time(NULL));
	bool upOrDown;
	int wert(100), minWert(30), step(0);
	int *values = new int [maxTime];


	for(int i = 0; i < maxTime; i++){
		upOrDown = rand()%2;
		step = rand()%30;
		if(upOrDown == 0 && wert > minWert){
			wert -= step;
		}else{
			wert += step;
		}
		values[i]=wert;
	}
	return values;
}
