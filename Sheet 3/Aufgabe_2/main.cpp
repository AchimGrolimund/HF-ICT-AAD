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
#include <iostream>
#include <ctime>

#include "stringutil.h"

using namespace std;

int main()
{
	std::string s1="abcba";

	cout<<StringUtil::isPalindrome(s1)<<endl;

	return 0;
}
