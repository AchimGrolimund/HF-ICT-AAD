/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			10.11.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

//#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;


class TreeUtil {
private:
	static pair<int, stack<int> *> sumOfChildren(vector<int> &values, int &max, int i);

public:
	static void printMaximumPath(vector<int> values);
};

void TreeUtil::printMaximumPath(vector<int> values) {
	int max = values.size();
	stack<int> *result;
	int sum = 0;
	result = sumOfChildren(values, max, 0).second;
	cout << "Result: ";
	while (result->size() != 0) {
		cout << result->top() << " ";
		sum += result->top();
		result->pop();
	}
	cout << endl << "(Dieser Pfad ergibt die maximale Summe " << sum << ")" << endl;
	delete result;
	return;
}

pair<int, stack<int> *> TreeUtil::sumOfChildren(vector<int> &values, int &max, int i) {
	if (2 * i + 1 >= max) {
		stack<int> *temp = new stack<int>;
		temp->push(values[i]);
		return make_pair(values[i], temp);
	}
	pair<int, stack<int> *> left = TreeUtil::sumOfChildren(values, max, 2 * i + 1);

	// Has only left Element
	if (2 * i + 2 >= max) {
		left.second->push(values[i]);
		return make_pair(left.first += values[i], left.second);
	}

	pair<int, stack<int> *> right = TreeUtil::sumOfChildren(values, max, 2 * i + 2);
	if (left.first > right.first) {
		delete right.second;
		left.second->push(values[i]);
		return make_pair(left.first += values[i], left.second);
	} else {
		delete left.second;
		right.second->push(values[i]);
		return make_pair(right.first += values[i], right.second);
	}
}


int main() {
	vector<int> values = {40, 100, 200, 20, 40, 70, 80, 50, 10, 60};
//	for (int i = 0; i < 10000000; i++) {
//		values.push_back(rand() % 1000);
//	}
	auto start = myTime::start();
	TreeUtil::printMaximumPath(values);
	myTime::stop(start);
	return 0;
}
