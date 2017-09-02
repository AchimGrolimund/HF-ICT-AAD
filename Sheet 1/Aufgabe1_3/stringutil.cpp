#include "stringutil.h"
#include <iostream>
using namespace std;



//=================================================================================

bool StringUtil::checkUniqueness(string s){
	int array[maxAscii];
	unsigned int sLenght;

	sLenght = s.length();
	for (int i = 0;i < maxAscii; i++){
		array[i] = 0;
	}


	for(int index = 0; index < sLenght; index++){

//		int idx = (unsigned char)s.at(index);
//		cout<< idx<<endl;
		array[(unsigned char)s.at(index)] += 1;
		if(array[(unsigned char)s.at((index))] > 1){
			return false;
		}
	}
	return true;
}
