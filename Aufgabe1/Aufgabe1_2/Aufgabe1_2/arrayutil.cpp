#include <iostream>
#include "arrayutil.h"

using namespace std;

long *ArrayUtil::multiplyArrayValues(const long *values, const int ARRAY_SIZE)
{
	static long *result = new long [ARRAY_SIZE]; //Result Array
	static long *tempArray = new long [ARRAY_SIZE]; // tempArray
	long temp(1);

	for(int i=0;i<ARRAY_SIZE;i++){	//Array durchlaufen
		result[i]=temp;				//ResultArray mit 1 füllen
		temp*=values[i];			//ester durchgang * allen Werten
	}
	temp=1;							// zurücksetzen
	for(int i = ARRAY_SIZE-1; i >= 0;i--){ // Array rückwährts durchlaufen
		tempArray[i]=temp;			// temp array mit 1 füllen
		temp*=values[i];			//
	}
	for(int i = 0;i<ARRAY_SIZE;i++){
		result[i]=result[i]*tempArray[i];
	}
	delete [] tempArray;
	return result;
}


