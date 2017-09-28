/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *

 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		x.x.2017
 *
 * @Description:
 *
 * Beispiel:
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/
/*
HF-ICT, Programmieren C++
Algorithmen und Datenstrukturen
Arbeitsblatt Rekursion
19-Sep-2017, David Herzig (dave.herzig@gmail.com)
*/

#include <iostream>
#include <chrono>
#include <ratio>
#include <ctime>
#include <thread>

using namespace std::chrono;
using namespace std;

/* AUFGABE 1, Fakultaet
Welches ist die groesste Zahl, fuer welche die Fakultaet mit C++
berechnet werden kann (falls der Datentyp long long verwendet wird.)?
*/
// 20! ist das Maximum

/* AUFGABE 2, Fibonacci Rekursiv (inkl Performance Messung!)
*/
int fibRe(int n) {
	if(n <=2){
		return 1;
	}else{
		return fibRe(n-1) + fibRe(n-2);
	}
}


/* AUFGABE 3, Fibonacci Iterativ (inkl Performance Messung!)
*/
int fibIt(int n) {
	int fib[] = {0,1,1};
	for(int i=2; i<=n; i++)
	{
		fib[i%3] = fib[(i-1)%3] + fib[(i-2)%3];
	}
	return fib[n%3];
}

/* AUFGABE 4, Fibonacci Rekursiv mit Verbesserung
*/
int fibReImp(int n) {
	// your code
}

/* AUFGABE 5, Exponentiation Rekursiv
*/
double power(double x, int n) { //x = Base, n = hoch
	if(n<=1){
		return x;
	}else{
		return x * power(x,n-1);
	}
}

int main(int argc, char **argv) {



	// Test Aufgabe 2
	if (fibRe(1) == 1 && fibRe(3) == 2 && fibRe(8) == 21) {
		cout << "Aufgabe 2 ist richtig" << endl;
	} else {
		cout << "Aufgabe 2 ist falsch" << endl;
	}

	// Test Aufgabe 3
	if (fibIt(1) == 1 && fibIt(3) == 2 && fibIt(8) == 21) {
		cout << "Aufgabe 3 ist richtig" << endl;
	} else {
		cout << "Aufgabe 3 ist falsch" << endl;
	}

	// Test Aufgabe 4
	if (fibReImp(1) == 1 && fibReImp(3) == 2 && fibReImp(8) == 21) {
		cout << "Aufgabe 4 ist richtig" << endl;
	} else {
		cout << "Aufgabe 4 ist falsch" << endl;
	}

	// Test Aufgabe 5
	if (power(2, 2) == 4 && power(2, 0) == 1 && power(3, 3) == 27) {
		cout << "Aufgabe 5 ist richtig" << endl;
	} else {
		cout << "Aufgabe 5 ist falsch" << endl;
	}

	return 0;
}



