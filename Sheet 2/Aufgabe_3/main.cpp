/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *     █████╗ ███╗   ██╗ █████╗  ██████╗ ██████╗  █████╗ ███╗   ███╗███╗   ███╗     ██████╗██╗  ██╗███████╗ ██████╗██╗  ██╗
 *    ██╔══██╗████╗  ██║██╔══██╗██╔════╝ ██╔══██╗██╔══██╗████╗ ████║████╗ ████║    ██╔════╝██║  ██║██╔════╝██╔════╝██║ ██╔╝
 *    ███████║██╔██╗ ██║███████║██║  ███╗██████╔╝███████║██╔████╔██║██╔████╔██║    ██║     ███████║█████╗  ██║     █████╔╝
 *    ██╔══██║██║╚██╗██║██╔══██║██║   ██║██╔══██╗██╔══██║██║╚██╔╝██║██║╚██╔╝██║    ██║     ██╔══██║██╔══╝  ██║     ██╔═██╗
 *    ██║  ██║██║ ╚████║██║  ██║╚██████╔╝██║  ██║██║  ██║██║ ╚═╝ ██║██║ ╚═╝ ██║    ╚██████╗██║  ██║███████╗╚██████╗██║  ██╗
 *    ╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝     ╚═╝     ╚═════╝╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝  ╚═╝
 *
 *
 * @Version:	1.0.2
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		10.09.2017
 *
 * @Description:
 *				In dieser Aufgabe soll eine Methode implementiert werden,
 *				welche als Parameter zwei Strings enthält.
 *				Die Methode liefert den Wert true, falls diese beiden Strings Anagramme sind.
 *				Anonsten false
 *
 * Beispiel:
 *				class stringUtil
 *				{
 *					public:
 *						static bool anagrammCheck(std::string s1, std::string s2);
 *				};
 *
 * Anmerkung:
 *				- Gross- und Kleinbuchstaben wurden "berücksichtigt"
 *				- ö unde Ö werden nicht erkannt
 *
 *==============================================[ EOF RDM ]=============================================================================*/
#include <iostream>
#include <ctime>

#include "stringutil.h"

using namespace std;

int main()
{
	clock_t start,stop;
	string s1,s2;
	s1="123456789abcde fGhijklmnopqrstuvwxyZ";
	s2="987654321abcde fghijklmnopqrstuvwxyz";
	start = clock();
	cout<<stringUtil::anagrammCheck(s1,s2)<<endl;
stop=clock();
cout<<"------------\nLaufzeit: "<<(double)(stop-start)/CLOCKS_PER_SEC<<endl;
	return 0;
}
