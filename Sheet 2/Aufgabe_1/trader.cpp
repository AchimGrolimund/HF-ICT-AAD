#include "trader.h"
#include <iostream>
#include <random>

using namespace std;

int Trader::calculateMaxProfit(const int *values, const int ARRAY_SIZE)
{

}

int Trader::fillTraderScale(int *values, const int ARRAY_SIZE)
{
	bool upOrDown;
	int wert(100), minWert(30), step(5);

	for(int i = 0; i < ARRAY_SIZE; i++){
		upOrDown = rand()%2;
		if(upOrDown == 0 && wert > minWert){
			wert -= step;
		}else{
			wert += step;
		}
		cout<<"Nr. "<<i<<".--> "<<wert<<endl;
	}
}
