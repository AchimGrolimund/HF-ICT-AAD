/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ██████╗ ██╗     ██╗   ██╗███████╗    ███╗   ███╗██╗███╗   ██╗██╗   ██╗███████╗
 *    ██╔══██╗██║     ██║   ██║██╔════╝    ████╗ ████║██║████╗  ██║██║   ██║██╔════╝
 *    ██████╔╝██║     ██║   ██║███████╗    ██╔████╔██║██║██╔██╗ ██║██║   ██║███████╗
 *    ██╔═══╝ ██║     ██║   ██║╚════██║    ██║╚██╔╝██║██║██║╚██╗██║██║   ██║╚════██║
 *    ██║     ███████╗╚██████╔╝███████║    ██║ ╚═╝ ██║██║██║ ╚████║╚██████╔╝███████║
 *    ╚═╝     ╚══════╝ ╚═════╝ ╚══════╝    ╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝
 *
 * @Version:	2.0.1
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		16.10.2017
 *
 * @Description:
 *				Implementieren Sie eine Methode analyseArray welche als Parameter einen vector mit Integer
 *				Werten bekommt. Diese Werte sind entweder Positiv, Negativ oder Null. Die Methode soll nun
 *				berechnen, wie viel Prozent der Werte Positiv, Negativ resp. Null sind. Diese drei Werte werden als
 *				Objekt der Klasse Result zurückgeliefert.
 *
 * Beispiel:
 *				Input: 1, 10, 0, -6, -9, 2, 5
 *				Lösung: [nPositive: 57.1%; nZero: 14.3%; nNegative: 28.6%]
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
#include <bits/stdc++.h> //Alle benötigten Includes

#include "result.h"
#include "arrayutil.h"

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;

int main()
{

	srand(static_cast<unsigned int>(time(NULL)));
	vector<int> myVec{1, 10, 0, -6, -9, 2, 5};

	auto start = myTime::start();
	Result result = ArrayUtil::analyseArray(myVec);
	cout.precision(3);
	cout<< result;
	myTime::stop(start);

	return 0;


}

