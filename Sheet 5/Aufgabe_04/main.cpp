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

//#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;


int calculate(string input){

	vector<int> asciiBuchstabe(26);
	int zaehler(0), multiplikator(26);

	transform(input.begin(),input.end(),input.begin(), ::tolower);

	for(const auto &i : input){
		if(i != ' '){
			asciiBuchstabe[static_cast<unsigned int>(i-'a')] += 1;
		}
	}

	sort(asciiBuchstabe.begin(),asciiBuchstabe.end(), std::greater<int>());

	for(const auto &j : asciiBuchstabe){
		if(j > 0 && multiplikator > 0){
			zaehler+= (j*multiplikator);
			multiplikator--;
		}
	}

	return zaehler;
}


int main()
{
	string myString2;

	for (unsigned int i(0); i < 10000000; ++i) {
		myString2 += static_cast<char>(rand()%25+'a');

	}


	string myString = "abcdefghijklmnopqrstuvwxyz";

	auto start = myTime::start();
	cout << "Ausgabe ohne move:\n";
	cout << "Die schoenheit deiner Zeichenkette ist: "<<calculate(myString2)<<endl;
	myTime::stop(start);
	cout << "---------------------------------\n";
	start = myTime::start();
	cout << "Ausgabe mit move:\n";
	cout<<"Die schoenheit deiner Zeichenkette ist: "<<calculate(move(myString2))<<endl;
	myTime::stop(start);

	return 0;
}



































