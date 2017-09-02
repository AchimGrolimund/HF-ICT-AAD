#include "stringutil.h"
#include <iostream>
using namespace std;


bool StringUtil::checkUniqueness(string s){
	int array[maxAscii];
	unsigned int sLenght;

	// Länge des Strings
	sLenght = s.length();
	// Erstelltes "array" mit 0 füllen
	for (int i = 0;i < maxAscii; i++){
		array[i] = 0;
	}

	//array an der Position des ASCII codes += 1 rechnen
	for(int index = 0; index < sLenght; index++){

		array[(unsigned char)s.at(index)] += 1;
		if(array[(unsigned char)s.at((index))] > 1){
			return false;
		}
	}
	return true;
}
