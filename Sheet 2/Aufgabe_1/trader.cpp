#include "trader.h"
#include <iostream>
#include <random>

using namespace std;

int Trader::calculateMaxProfit(const int *values, const int ARRAY_SIZE)
{

	return 0;
}

int *Trader::fillTraderScale(int maxTime)
{
	bool upOrDown;
	int wert(100), minWert(30), step(5);
	int *values = new int [maxTime];

	for(int i = 0; i < maxTime; i++){
		upOrDown = rand()%2;
		if(upOrDown == 0 && wert > minWert){
			wert -= step;
		}else{
			wert += step;
		}
		//cout<<"Nr. "<<i<<".--> "<<wert<<endl;
		values[i]=wert;
	}
	return values;
}
