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

int kgv(int,int);
int ggtRek(int,int);

int main()
{

	auto start = myFunks::myTime::start();
	std::this_thread::sleep_for (std::chrono::seconds(1));
	cout<<kgv(12,18)<<endl; //36
	myFunks::myTime::stop(start);

	return 0;
}



int kgv(int zahl1, int zahl2)
{
   return (zahl1*zahl2)/ggtRek(zahl1, zahl2);
}

//<-- GGT Berechnen Rekursiv -->
int ggtRek(int a, int b){
	if(b==0) return a;
	return ggtRek(b,a%b);
}
