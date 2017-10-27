/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ██╗      ██████╗ ███╗   ██╗███████╗██╗  ██╗   ██╗
 *    ██║     ██╔═══██╗████╗  ██║██╔════╝██║  ╚██╗ ██╔╝
 *    ██║     ██║   ██║██╔██╗ ██║█████╗  ██║   ╚████╔╝
 *    ██║     ██║   ██║██║╚██╗██║██╔══╝  ██║    ╚██╔╝
 *    ███████╗╚██████╔╝██║ ╚████║███████╗███████╗██║
 *    ╚══════╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚══════╝╚═╝
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		x.x.2017
 *
 * @Description:
 *				Implementieren Sie eine Methode "getLonelyElement" welche als Parameter einen string bekommt.
 *				Jeder Character in diesem string kommt zweimal vor, ausser eines. Die Methode soll das
 *				Element zurückliefern, welches nur einmal vorkommt.
 *
 * Beispiel:
 *				Input: abcdedcba11
 *				Resultat: e (das Element e kommt nur einmal vor)
 *				ACHTUNG: Die Implementierung muss besser sein als O(n^2)
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#include <bits/stdc++.h> //Alle benötigten Includes
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

//#define DEBUG

#include "stringutil.h"

using namespace std;
using namespace std::chrono;

int main()
{
	string input, input2;
	input2 = "aabbccddzf";
	for (unsigned int i(0); i < 100000000; ++i) {
		input.push_back('a'+rand()%24);
	}
	input.push_back('z'); //First single Char
	input.push_back('y'); //Second single Char

	auto start = myTime::start();
	cout<<StringUtil::getLonelyElement2(move(input2))<<endl;
	//cout<<StringUtil::getLonelyElement2(move(input))<<endl;
	myTime::stop(start);

	return 0;
}


