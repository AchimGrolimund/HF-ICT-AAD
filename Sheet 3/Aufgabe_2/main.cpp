/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *
 *    ██████╗  █████╗ ██╗     ██╗███╗   ██╗██████╗ ██████╗  ██████╗ ███╗   ███╗
 *    ██╔══██╗██╔══██╗██║     ██║████╗  ██║██╔══██╗██╔══██╗██╔═══██╗████╗ ████║
 *    ██████╔╝███████║██║     ██║██╔██╗ ██║██║  ██║██████╔╝██║   ██║██╔████╔██║
 *    ██╔═══╝ ██╔══██║██║     ██║██║╚██╗██║██║  ██║██╔══██╗██║   ██║██║╚██╔╝██║
 *    ██║     ██║  ██║███████╗██║██║ ╚████║██████╔╝██║  ██║╚██████╔╝██║ ╚═╝ ██║
 *    ╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝╚═╝  ╚═══╝╚═════╝ ╚═╝  ╚═╝ ╚═════╝ ╚═╝     ╚═╝
 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		17.9.2017
 *
 * @Description:
 *				In dieser Aufgabe soll eine Methode implementiert werden,
 *				welche mit Hilfe von Rekursion prüft,
 *				ob eine Zeichenkette ein Palindrome ist.
 *
 * Beispiel:
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/
//#define DEBUG
#ifdef DEBUG
#define dout(str) do { std::cout << str << std::endl; } while( false )
#else
#define dout(str) do { } while ( false )
#endif

#include <iostream>
#include <ctime>
#include <chrono>

#include "stringutil.h"

using namespace std;
using namespace std::chrono;

int main()
{
	std::string s1="abcdefghijklmnopqrstuvwxyzzyxwvutsrqponmlkjihgfedcba";
	dout("Debug");
	auto start = high_resolution_clock::now();
	cout<<StringUtil::isPalindrome(s1)<<endl;
	auto ende  = high_resolution_clock::now();
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " ns"<<endl;

	return 0;
}




