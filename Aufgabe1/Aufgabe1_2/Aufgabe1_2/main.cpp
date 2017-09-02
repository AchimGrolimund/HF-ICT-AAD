#include <iostream>
#include <ctime>
#include "arrayutil.h"

using namespace std;

int main()
{
	clock_t start,stop;
	long inputArray[] = { 2,4,7,3,4,9,2,4,2,3,5,1,9,2,7,1,6,8,3,2,5,6,9,3,7 }, *outputArray;
	int inputSize(25);
	start = clock();
	outputArray = ArrayUtil::multiplyArrayValues(inputArray, inputSize);

	for(int i =0;i<inputSize;i++){
		cout<<i+1<<" --> "<< outputArray[i]<<endl;
	}
	stop = clock();
	cout<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;

	delete [] outputArray;
	return 0;
}


