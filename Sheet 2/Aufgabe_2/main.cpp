/*==============[ Algorithmen und Datenstrukturen]=====================================================================================*
 *
 *     ██████╗ ██████╗  ██████╗ ███████╗███████╗████████╗███████╗███████╗    ██████╗ ██████╗  ██████╗ ██████╗ ██╗   ██╗██╗  ██╗████████╗
 *    ██╔════╝ ██╔══██╗██╔═══██╗██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔════╝    ██╔══██╗██╔══██╗██╔═══██╗██╔══██╗██║   ██║██║ ██╔╝╚══██╔══╝
 *    ██║  ███╗██████╔╝██║   ██║███████╗███████╗   ██║   █████╗  ███████╗    ██████╔╝██████╔╝██║   ██║██║  ██║██║   ██║█████╔╝    ██║
 *    ██║   ██║██╔══██╗██║   ██║╚════██║╚════██║   ██║   ██╔══╝  ╚════██║    ██╔═══╝ ██╔══██╗██║   ██║██║  ██║██║   ██║██╔═██╗    ██║
 *    ╚██████╔╝██║  ██║╚██████╔╝███████║███████║   ██║   ███████╗███████║    ██║     ██║  ██║╚██████╔╝██████╔╝╚██████╔╝██║  ██╗   ██║
 *     ╚═════╝ ╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝   ╚═╝   ╚══════╝╚══════╝    ╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝ ╚═╝  ╚═╝   ╚═╝
 *
 *
 *
 * @Version:	1.2.3
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		09.09.2017
 *
 * @Description:
 *				In dieser Aufgabe soll eine Methode implementiert werden,
 *				welche als Parameter einen Array mit Integer Werten enthält.
 *				Aus diesem Array soll nun das grösste Produkt gefunden werden,
 *				welches mit 3 Elementen aus diesem Array erstellt werden kann.
 *
 * Beispiel:
 *				class ArrayUtil
 *				{
 *					public:
 *						static int highestProduct(int *values, const int ARRAY_SIZE);
 *
 *				};
 *
 * Anmerkung:
 *				- 3te Lösung mit std::Liste<int> gelöst, beachtet auch Negativwerte, kleiner fehler bei der Erstermittlung. :-(
 *
 *==========================[ EOF RDM ]=================================================================================================*/
#include <iostream>
#include <time.h>
#include <ctime>



#include "arrayutil.h"

using namespace std;

int main()
{
	const int ARRAY_SIZE(519000);
	clock_t start,stop;

	int array[ARRAY_SIZE];

	srand(time(NULL));

	for(int i = 0; i < ARRAY_SIZE; i++){
		array[i] =  static_cast<int>(rand()%12+(-6));
		//cout<<i<<" ---> " <<array[i]<<endl;
	}
	cout<<"===================================="<<endl;
	cout<<"ARRAY_SIZE: "<<ARRAY_SIZE<<endl;
	cout<<"===================================="<<endl;

	start = clock();
	cout<<"Groesstes Produckt: "<<ArrayUtil::highestProduct(array,ARRAY_SIZE)<<endl;
	stop = clock();
	cout<<"-----------\nBerechnungszeit: "<<static_cast<double>((stop-start)/CLOCKS_PER_SEC)<<" sec"<<endl;



	return 0;
}
