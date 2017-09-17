#include <iostream>
#include <map>

#include "coincombination.h"

using namespace std;


void CoinCombination::printCoinCombination(double value, const double *coins, const int ARRAY_SIZE)
{
	int helper(0);

	double temp_value = value;

	if(value < coins[0]){cerr<<"Error: Der Betrag ist kleiner wie die kleinste Muenze...\n"<<endl; return;}
	cout<<"Benoetigt werden --> \n";
	for(int i = ARRAY_SIZE-1; i >= 0; i--){
		helper = static_cast<int>( temp_value /coins[i]);
		temp_value -= helper* coins[i];
		cout<<i<<". "<<helper<<" x "<<static_cast<float>(coins[i])<<endl;
	}


}
