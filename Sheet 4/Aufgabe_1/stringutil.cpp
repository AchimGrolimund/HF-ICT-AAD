#include "stringutil.h"
#include "data.h"
#include <bits/stdc++.h> //Alle benötigten Includes

using namespace std;


char StringUtil::getLonelyElement(std::string input)
{
	Data buchstabe[255];

	// <-- buchstabe Array.counter 0 initialisieren -->
	for(int i(0); i< 255; i++){
		buchstabe[i].counter = 0;
	}

	// <-- input in buchstaben Array.counter füllen -->
	for(auto x : input){
		buchstabe[static_cast<int>(x)].counter += 1;
	}

	for(unsigned int k(0); k < 255; k++){
		if(buchstabe[k].counter == 1){
			return static_cast<char>(k);
		}
	}
	return static_cast<char>(36);
}

char StringUtil::getLonelyElement2(std::string input)
{
	Data buchstabe[255];
	int temp(255), tempVal(36);

	// <-- buchstabe Array.counter 0 initialisieren -->
	for(unsigned int i(0); i< 255; i++){
		buchstabe[i].counter = 0;
		buchstabe[i].pos = -1;
	}

	// <-- input in buchstaben Array.counter & .pos füllen -->
	for(auto j : input){
		buchstabe[static_cast<int>(j)].counter += 1;
		buchstabe[static_cast<int>(j)].pos = static_cast<int>(j);
	}

	//<-- Suche ersten einzelnen Buchstaben in Zeichenkette -->
	for(auto l : input){
		if(buchstabe[static_cast<int>(l)].counter == 1 && buchstabe[static_cast<int>(l)].pos < temp){
			temp = static_cast<int>(l);
			return static_cast<char>(temp);
		}
	}

	return static_cast<char>(tempVal);
}
