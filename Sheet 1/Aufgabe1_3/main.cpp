/*==============[ Algorithmen und Datenstrukturen]=====================================================================================*
 *
 *
 * @Version: 1.0.5
 * @Author: Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date: 1.09.2017
 *
 * @Description:
 *				In dieser Aufgabe soll ein String überprüft werden ob die enthaltenen Zeichen "Unique" sind.
 *				Die rückgabe erfolgt mit einem Boolean (true/false || 1/0).
 *
 * Beispiel:
 *				cout<<StringUtil::checkUniqueness("abcdefgh")<<endl;
 *				...true // 1
 *
 *				cout<<StringUtil::checkUniqueness("aabcdefg")<<endl;
 *				...false // 0
 *
 * Anmerkung:	Die funktion ist in dieser Variante O(n) "Linear"
 *
 *==========================[ EOF RDM ]=================================================================================================*/

#include <iostream>
#include "stringutil.h"
#include <string>
#include <ctime>

using namespace std;

int main()
{
	clock_t start, stop;

	start = clock();
	cout<<StringUtil::checkUniqueness("abcdefghijklmnop")<<endl;
	stop = clock();
	cout<<"___________________________________"<<endl;
	cout<<(double)(stop-start)/CLOCKS_PER_SEC<<" sekunden"<<endl;
	return 0;
}
