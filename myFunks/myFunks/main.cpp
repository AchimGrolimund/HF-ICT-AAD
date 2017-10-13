#include <iostream>

#include "myfunks.h"
#define DEBUG
#include "C:\Users\achim\Documents\Programming\C++\HF-ICT-AAD\myFunks\myFunks\debug.h"


using namespace std;


int main()
{
	unsigned int arraySize(5);

	int abc[arraySize];
	vector<int> myVec;
	cout<<"arraySize: "<<arraySize<<endl;
	debug_msg("bluub");
	myFunks::myArray::fillRandom(abc,arraySize,50,-50);
	myFunks::myVector<int>::fillRandom_back(myVec,arraySize,20,-20);

	auto start = myFunks::myTime::start();
	for(unsigned int i(0); i < arraySize; i++){
		cout<<myVec[i]<<endl;
	}
	myFunks::myTime::stop(start);

}
