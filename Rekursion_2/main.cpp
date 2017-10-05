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
//#define DEBUG
#ifdef DEBUG
#define dout(str) do { std::cout << str << std::endl; } while( false )
#else
#define dout(str) do { } while ( false )
#endif

#include <iostream>
#include <ctime>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

class Daten{
	public:
		virtual void sort(vector<int> &vec)=0;
		virtual void print(vector<int> &vec)=0;
};

class mySort : Daten{
	public:
		void sort(vector<int> &vec);
		void print(vector<int> &vec);
};

void mySort::sort(vector<int> &vec){

}

void mySort::print(vector<int> &vec)
{
	vector<int>::iterator it;

	for(it=vec.begin(); it != vec.end(); it++){
		cout << *it<< " , ";
	}
	cout << endl;
}


int main()
{
	vector<int> myVec;

	mySort myDaten;

	for(int i =0; i < 20;i++){
		myVec.push_back(rand()%100);
	}

	auto start = high_resolution_clock::now();

	myDaten.print(myVec);
	myDaten.sort(myVec);
	myDaten.print(myVec);

	auto ende  = high_resolution_clock::now();
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " ns"<<endl;

	return 0;
}






