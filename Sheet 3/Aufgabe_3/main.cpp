/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ███████╗██╗   ██╗██████╗ ███████╗████████╗██████╗ ██╗███╗   ██╗ ██████╗
 *    ██╔════╝██║   ██║██╔══██╗██╔════╝╚══██╔══╝██╔══██╗██║████╗  ██║██╔════╝
 *    ███████╗██║   ██║██████╔╝███████╗   ██║   ██████╔╝██║██╔██╗ ██║██║  ███╗
 *    ╚════██║██║   ██║██╔══██╗╚════██║   ██║   ██╔══██╗██║██║╚██╗██║██║   ██║
 *    ███████║╚██████╔╝██████╔╝███████║   ██║   ██║  ██║██║██║ ╚████║╚██████╔╝
 *    ╚══════╝ ╚═════╝ ╚═════╝ ╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝
 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		17.9.2017
 *
 * @Description:
 *				In dieser Aufgabe soll eine Methode implementiert werden,
 *				welche von 2 Zeichenketten den längsten Substring findet,
 *				welcher in beiden Zeichenketten vorkommt.
 *
 * Beispiel:
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/
#include <iostream>
#include <set>
#include <ctime>
#include <cstdlib>
#include "stringutil.h"

using namespace std;



int main() {
	time_t start, stop;

	string test1 = "";
	string test2 = "";
	for(int i = 0; i < 1000; i++){
		test1 += rand() % 26 + 'A';
		test2 += rand() % 26 + 'A';
	}


	start = clock();
	cout << StringUtil::lcs(test1, test2) << endl;
	stop = clock();
	cout << "Laufzeit = " << (double)(stop-start)/CLOCKS_PER_SEC << endl;
	cout << "String laenge = " << test1.length() << endl;
	cout << "********************************************"<<endl;

	for(int i = 0; i < 1000; i++){
		test1 += rand() % 26 + 'A';
		test2 += rand() % 26 + 'A';
	}

	start = clock();
	cout << StringUtil::lcs(test1, test2) << endl;
	stop = clock();
	cout << "Laufzeit = " << (double)(stop-start)/CLOCKS_PER_SEC << endl;
	cout << "String laenge = " << test1.length() << endl;
	return 0;
}
