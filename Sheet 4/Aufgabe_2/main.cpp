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
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		x.x.2017
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
#define DEBUG //Bei Release auskommentieren!!
#ifdef DEBUG
#define dout(str) do { std::cout << str << std::endl; } while( false )
#else
#define dout(str) do { } while ( false )
#endif

#include <iostream>
#include <ctime>
#include <chrono>

#include <vector>

#include "result.h"
#include "arrayutil.h"



using namespace std;
using namespace std::chrono;





int main()
{
	vector<int> myVec{1, 10, 0, -6, -9, 2, 5};

	auto start = high_resolution_clock::now();

	// Code Here

	auto ende  = high_resolution_clock::now();

	//<-- Asgabe der Zeitmessung -->
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " ns"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start).count() << " ms"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start).count() << " s"<<endl;

	return 0;
}


