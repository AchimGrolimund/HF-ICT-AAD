#include "stringutil.h"
#include "data.h"

#include <list>

using namespace std;


char StringUtil::getLonelyElement(std::string input)
{
	Data buchstabe[255];

	// <-- buchstabe Array.counter 0 initialisieren -->
	for(unsigned int i(0); i< 255; i++){
		buchstabe[i].counter = 0;
	}

	// <-- input in buchstaben Array.counter füllen -->
	for(unsigned int j(0); j< input.size(); j++){
		buchstabe[static_cast<int>(input.at(j))].counter += 1;
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

	// <-- input in buchstaben Array.counter füllen -->
	for(unsigned int j(0); j< input.size(); j++){
		buchstabe[static_cast<int>(input.at(j))].counter += 1;
		buchstabe[static_cast<int>(input.at(j))].pos = j;
	}

	for(unsigned int k(0); k < 255; k++){
		if(buchstabe[k].counter == 1 && buchstabe[k].pos < temp){
			temp = buchstabe[k].pos;
			tempVal = k;
		}
	}

	return static_cast<char>(tempVal);
}
