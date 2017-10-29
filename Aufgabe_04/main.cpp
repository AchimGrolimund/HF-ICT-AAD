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


int calculate(string);

int main()
{
	string myString = "Sometimes test cases are hard to make up";

	cout<<"Die schoenheit deiner Zeichenkette ist: "<<calculate(move(myString))<<endl;

}


int calculate(string input){

	vector<int> asciiBuchstabe(26);
	int zaehler(0), multiplikator(26);

	transform(input.begin(),input.end(),input.begin(), ::tolower);

	for(const auto &i : input){
		if(i != ' '){
			asciiBuchstabe[static_cast<unsigned int>(i-'a')+1] += 1;
		}
	}

	sort(asciiBuchstabe.begin(),asciiBuchstabe.end(), std::greater<int>());

	for(const auto &j : asciiBuchstabe){
		if(j > 0){
			zaehler+= (j*multiplikator);
			multiplikator--;
		}
	}

	return zaehler;
}
































