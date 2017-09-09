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
 * @Version:	1.0.0
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
 *				- - - - - -
 *
 *==========================[ EOF RDM ]=================================================================================================*/
#include <iostream>
#include <time.h>

#include "arrayutil.h"

using namespace std;

int main()
{
	static int ARRAY_SIZE(10);
	int array[ARRAY_SIZE];
	srand(time(NULL));

	for(int i = 0; i < 10; i++){
		array[i] = rand()%20;
		cout<<i<<" ---> " <<array[i]<<endl;
	}

	cout<<ArrayUtil::highestProduct(array,ARRAY_SIZE)<<endl;

	return 0;
}
