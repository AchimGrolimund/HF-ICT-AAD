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
#include <iostream>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;

int ggt(int,int);
int ggtRek(int,int);

int main()
{

	cout<<ggt(15,30)<<endl;
	cout<<ggtRek(15,30)<<endl;

	return 0;
}

int ggt(int a, int b){
	while (a != b) {
		if (a>b) {
			a-=b;
		}else{
			b-=a;
		}
	}
	return  a;
}


int ggtRek(int a, int b){
	if (a != b) {
		if(a>b){
			ggtRek(a-=b,b);
		}else{
			ggtRek(a,b-=a);
		}
	}
	return a;
}
