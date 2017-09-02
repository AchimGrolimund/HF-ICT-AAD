#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


class Data
{
	public:
		int counter;
		int pos;
};

char analyseNew(string s){
	int smallest=s.length(),
		buchstaben(0);
	char result = '$';
	Data array[26];

	for(int i =0;i<26;i++){					//
		array[i].counter=0;					// Array füllen
		array[i].pos=-1;					//
	}

	for (int j = 0; j < s.length(); j++) {	// Vorkommen und Position ermitteln
		buchstaben = s.at(j) - 'A';			// A = 65 // Welcher Buchstabe ist an der Position (j) // C = 67 - A = 65 == 2
		array[buchstaben].counter += 1;		// Zähler der vorkommen
		array[buchstaben].pos = j;			// Position (Stelle) in dem String
	}

	for (int k = 0; k < 26; k++) {			// 0-26 = A-Z
		if (array[k].counter == 1) {		// ist array[k] nur ein mal vorgekommen
			if ( smallest > array[k].pos){	// ist die Gesammtläge grösser als die Position
				smallest = array[k].pos;	// smallest wird zu der neuen Position
				result = 'A' + k;			// result erhält nun den Buchstaben bei der Position
			}
		}
	}

	return result;							// Rückgabe des Resultates (Buchstabe)
}

string createString (int size) {
	string result = "";
	for (int i = 0; i < size; i++) {
		result += ('A' + rand() % 25);		// A + random 0-25
	}
	result += 'Z';							// Z am ende des Strings plazieren

	return result;
}


int main() {
	clock_t start, stop;

	string s = createString(100000000);

	start = clock();
	cout << analyseNew(s) << endl;
	stop = clock();

	cout << (double) (stop - start) / CLOCKS_PER_SEC << endl;
	return 0;
}














