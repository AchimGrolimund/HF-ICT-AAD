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

#include <iostream>
#include <ctime>
#include <chrono>

#include "stringutil.h"


using namespace std;
using namespace std::chrono;

int main()
{


	auto start = high_resolution_clock::now();
	cout<<StringUtil::getLonelyElement("bbccddeefgghhiaijj88")<<endl;
	auto ende  = high_resolution_clock::now();

	//<-- Asgabe der Zeitmessung -->
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " ns"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start).count() << " ms"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start).count() << " s"<<endl;

	return 0;
}


