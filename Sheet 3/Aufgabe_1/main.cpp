/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ███╗   ███╗██╗   ██╗███╗   ██╗███████╗██╗  ██╗ ██████╗ ███╗   ███╗██████╗ ██╗███╗   ██╗ █████╗ ████████╗██╗ ██████╗ ███╗   ██╗███████╗███╗   ██╗
 *    ████╗ ████║██║   ██║████╗  ██║╚══███╔╝██║ ██╔╝██╔═══██╗████╗ ████║██╔══██╗██║████╗  ██║██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║██╔════╝████╗  ██║
 *    ██╔████╔██║██║   ██║██╔██╗ ██║  ███╔╝ █████╔╝ ██║   ██║██╔████╔██║██████╔╝██║██╔██╗ ██║███████║   ██║   ██║██║   ██║██╔██╗ ██║█████╗  ██╔██╗ ██║
 *    ██║╚██╔╝██║██║   ██║██║╚██╗██║ ███╔╝  ██╔═██╗ ██║   ██║██║╚██╔╝██║██╔══██╗██║██║╚██╗██║██╔══██║   ██║   ██║██║   ██║██║╚██╗██║██╔══╝  ██║╚██╗██║
 *    ██║ ╚═╝ ██║╚██████╔╝██║ ╚████║███████╗██║  ██╗╚██████╔╝██║ ╚═╝ ██║██████╔╝██║██║ ╚████║██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║███████╗██║ ╚████║
 *    ╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚═╝╚═════╝ ╚═╝╚═╝  ╚═══╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═╝  ╚═══╝
 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		17.9.2017
 *
 * @Description:
 *				In dieser Aufgabe soll ein Algorithmus implementiert werden,
 *				welcher für einen bestimmten Geld-betrag die minimale Anzahl
 *				Münzen berechnet. Der Algorithmus erhält als Input den Betrag
 *				sowie ein Array mit den verfügbaren Münzen.
 *
 * Beispiel:
 *				Betrag: 23 CHF --> value
 *				Münzen: 0.05, 0.10, 0.20, 0.50, 1, 2, 5 --> *coins
 *				Resultat: 5, 5, 5, 5, 2, 1 (minimale Anzahl M ̈unzen)
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/
#include <iostream>
#include <ctime>
#include "coincombination.h"

using namespace std;

int main()
{
	double value(99999.95);
	double coins[7]{0.05,0.10,0.20,0.50,1,2,5};
	clock_t start,stop;
	start = clock();
	CoinCombination::printCoinCombination(value,coins,7);
	stop=clock();
	cout<<"============================\nLaufzeit: "<<static_cast<double>((stop-start)/CLOCKS_PER_SEC)<<endl;
	return 0;
}
