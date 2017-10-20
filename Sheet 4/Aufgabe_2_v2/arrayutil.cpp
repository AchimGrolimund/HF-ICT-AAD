#include "arrayutil.h"
#include "result.h"
#include <bits/stdc++.h> //Alle benötigten Includes


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	Result result;
	//<-- Vector "input" durchlaufen -->
	for(int x : input){
		if(x < 0){
			result.nNegative += 1;
		}
		else if (x > 0) {
			result.nPositive += 1;
		}else {
			result.nZero += 1;
		}
	}

	return result;
}


