/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"


using namespace std;

class TreeUtil {
public:
	static bool isBinarySearchTree(vector<int> values);
	static bool upperValues(vector<int> &values,unsigned int i, int value);
};

bool TreeUtil::upperValues(vector<int> &values,unsigned int i, int value) {
	if (i <= 0)return true;
	if (i % 2 == 0) {
		// I am the right element
		i = (i-2)/2;
		// values[i] = a parent element
		if (values[i] > value) return false;
	} else {
		// I am the left element
		i = (i-1)/2;
		// values[i] = a parent element
		if (values[i] <= value) return false;

	}
	return upperValues(values, i, value);
}

bool TreeUtil::isBinarySearchTree(vector<int> values) {
	for (unsigned int i = 1; i < values.size(); i++) {
		if (!upperValues(values, i, values[i])) return false;
	}

	return true;
};

int main() {
	vector<int> values = {20, 12, 34, 9, 19, 21, 35, 8, 13};
	auto start = myTime::start();
	cout << (TreeUtil::isBinarySearchTree(values) ? "SearchTree" : "No SearchTree") << endl;
	myTime::stop(start);
	return 0;
}

