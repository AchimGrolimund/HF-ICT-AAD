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
	for_each(input.begin(),input.end(),[&asciiBuchstabe](char i){if((i >= 'a')&&(i <= 'z')) asciiBuchstabe[static_cast<unsigned int>(i-'a')] += 1;});
	sort(asciiBuchstabe.begin(),asciiBuchstabe.end(), std::greater<int>());
	for_each(asciiBuchstabe.begin(), asciiBuchstabe.end(), [&zaehler, &multiplikator](int v){zaehler += (v*multiplikator);multiplikator--;});
	return zaehler;
}


int main()
{
	string myString2;

	for (unsigned int i(0); i < 10000000; ++i) {
		myString2 += static_cast<char>(rand()%25+'a');

	}

	string myString = ".. 57^'abcdefghijklmnopqrstuvwxyz";
	string myString3 = "Sometimes test cases are hard to make up";

	auto start = myTime::start();
	cout << "Stringlaenge " << myString.size() << "\n";
	cout << "Die schoenheit deiner Zeichenkette ist: "<<calculate(move(myString))<<"\n";
	myTime::stop(start);
	cout << "---------------------------------\n";
	start = myTime::start();
	cout << "Stringlaenge " << myString3.size() << "\n";
	cout<<"Die schoenheit deiner Zeichenkette ist: "<<calculate(move(myString3))<<"\n";
	myTime::stop(start);
	cout << "---------------------------------\n";
	start = myTime::start();
	cout << "Stringlaenge " << myString2.size() << "\n";
	cout<<"Die schoenheit deiner Zeichenkette ist: "<<calculate(move(myString2))<<"\n";
	myTime::stop(start);

	return 0;
}



































