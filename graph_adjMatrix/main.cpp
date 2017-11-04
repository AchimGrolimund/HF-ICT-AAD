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



void parseGraph(vector<int> *adjMatrix , bool* visited, int curendNode){

}



int main()
{

	vector<int> adjMatrix[7];
	adjMatrix[0].push_back(1);
	adjMatrix[0].push_back(2);
	adjMatrix[0].push_back(3);

	adjMatrix[1].push_back(0);
	adjMatrix[1].push_back(4);
	adjMatrix[1].push_back(5);
	adjMatrix[1].push_back(6);

	adjMatrix[2].push_back(0);
	adjMatrix[2].push_back(3);
	adjMatrix[2].push_back(4);

	adjMatrix[3].push_back(0);
	adjMatrix[3].push_back(2);
	adjMatrix[3].push_back(4);

	adjMatrix[4].push_back(1);
	adjMatrix[4].push_back(2);
	adjMatrix[4].push_back(3);
	adjMatrix[4].push_back(6);

	adjMatrix[5].push_back(1);

	adjMatrix[6].push_back(1);
	adjMatrix[6].push_back(4);


	return 0;
}
