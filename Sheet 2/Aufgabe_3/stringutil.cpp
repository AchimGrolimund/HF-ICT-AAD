#include "stringutil.h"
#include "daten.h"

#include <string>


bool stringUtil::anagrammCheck(std::string s1, std::string s2)
{
	static unsigned int maxAscii = 255;

	if(s1.length() != s2.length()){
		return false;
	}

	Daten array[maxAscii];

	for(unsigned int i = 0; i<maxAscii;i++){
		array[i].value = 0;
	}

	//--------------------------------------------------

	for(unsigned int index = 0;index < s1.length();index++){
		array[tolower(s1.at(index))].value += 1;
	}

	for(unsigned int test = 0;test<s2.length();test++){
		if(array[tolower(s2.at(test))].value <= 0){
			return false;
		}
		array[tolower(s2.at(test))].value -= 1;
	}

	for(unsigned int j = 0;j<maxAscii;j++){
		if(array[j].value != 0){
			return false;
		}
	}
	return true;

}
