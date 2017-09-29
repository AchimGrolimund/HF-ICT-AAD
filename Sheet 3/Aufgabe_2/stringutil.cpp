#include "stringutil.h"

#include <iostream>
#include <vector>

using namespace std;



bool StringUtil::isPalindrome(std::string input)
{
	unsigned int start(0), end=input.size()-1;
	float groesse = input.size();
	groesse = static_cast<int>(groesse/2);

	for(unsigned int i = 0; i<groesse;i++){
		if(input.at(start) != input.at(end)){
			return false;
		}
		--end;
		++start;
	}
	return true;
}

bool StringUtil::isPalindromeRek(std::string input)
{
	if(input.size() == 0 || input.size() == 1){
		return true;
	}
	return (input[0] == input[input.length()-1] && isPalindromeRek(input.substr(1, input.length()-2)));
}
