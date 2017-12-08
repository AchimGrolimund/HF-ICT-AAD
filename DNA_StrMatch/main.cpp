#include <bits/stdc++.h> //Alle benötigten Includes
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

//#define DEBUG
using namespace std;


string generateDNA(int size) {
	vector<char> v = {'A', 'C', 'G', 'T'};
	string result = "";
	for (int i = 0; i < size; i++) {
		int r = rand() % v.size();
		result += v[r];
	}
	return result;
}

int match(string t, string p) {
	for (int i = 0; i < t.size() - p.size() + 1; i++) {
		string s = "";
		for (int j = 0; j < p.size(); j++) {
			s += t[i + j];
		}
		if (s == p) {
			return i;
		}
	}
	return -1;
}

int bm(string t, string p) {
	// create map, preprocess pattern
	for (int i = 0; i < t.size() - p.size() + 1; i++) {
		string s = "";
		for (int j = 0; j < p.size(); j++) {
			s += t[i + j];
		}
		cout << s << endl;
	}
}


int main(int argc, char **argv) {
	string t = generateDNA(100000000);
	string p = "GATGTAAGTATTA";
	//string t = "er sagte abrakadabra aber";
	//string p = "aber";
	auto start = myTime::start();
	int pos = bm(t, p);
	myTime::stop(start);
	cout << pos << endl;
	return 0;
}

