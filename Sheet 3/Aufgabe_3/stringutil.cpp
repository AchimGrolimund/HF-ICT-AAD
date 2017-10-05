#include "stringutil.h"
#include <string>
#include <iostream>
#include <set>

using namespace std;


string StringUtil::lcs(string input1, string input2) {
	set<string> checkString;
	set<string>::iterator it;
	string longString = "NOTHING FOUND";
	unsigned int temp = 0;
	string temp1 = "";
	int count = 0;


	for (unsigned int i = 0; i < input1.length(); i++) {
		for (unsigned int j = 0; j + i < input1.length(); j++) {
			checkString.insert(input1.substr(i, j));
			count++;
		}
	}

	for (it = checkString.begin(); it != checkString.end(); ++it) {
		temp1 = *it;
		size_t found = input2.find(temp1);
		if (found != string::npos) {
			if (temp < temp1.length()) {
				temp = temp1.length();
				longString = temp1;
			}
		}

	}


	cout << "Moegliche kombinationen: " << count << endl;
	return longString;
};
