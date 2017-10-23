#include "myfunks.h"
#include "C:\Users\achim\Documents\Programming\C++\HF-ICT-AAD\myFunks\myFunks\debug.h"
#include <bits/stdc++.h> //Alle benötigten Includes

#define DEBUG
using namespace std;


int main()
{
	unsigned int arraySize(5);

	int myArr[arraySize];
	vector<int> myVec;
	cout<<"arraySize: "<<arraySize<<endl;
	myArray::fillRandom(myArr,arraySize,20,10);
	myVector<int>::fillRandom_back(myVec,arraySize,20,-20);

	auto start = myTime::start();
	for(auto i : myArr){
		cout<<i<<endl;
	}
	myTime::stop(start);

}
