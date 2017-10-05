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


using namespace std;
using namespace std::chrono;
// ////////////-------------------------------------------------------------
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;

class Sort {
	public:
		virtual void sort(vector<int> & data) = 0;
};

class QuickSort : public Sort {
	public:
		virtual void sort(vector<int> & data);
};

void QuickSort::sort(vector<int> & data) {
	// Abbruchbedingung
	if (data.size() <= 1) return;

	// pivot element bestimmen
	int randIndex = rand()%data.size();
	int pivot = data[randIndex];
	data[randIndex] = data[data.size()-1];
	data[data.size()-1] = pivot;

	// split in linke und rechte haelfte
	vector<int> left;
	vector<int> right;
	for (unsigned int i=0; i<data.size()-1; i++) {
		if (data[i] < pivot) {
			left.push_back(data[i]);
		} else {
			right.push_back(data[i]);
		}
	}

	// rekursiver aufruf
	sort(left);
	sort(right);

	// merge
	unsigned int index = 0;
	for (index=0; index<left.size(); index++) {
		data[index] = left[index];
	}
	data[index] = pivot;
	for (unsigned int i=0; i<right.size(); i++) {
		data[index+i+1] = right[i];
	}
}

class SelectionSort : public Sort {
	public:
		virtual void sort(vector<int> & data);
};

void SelectionSort::sort(vector<int> & data) {
	for (unsigned int i=0; i<data.size()-1; ++i) {
		int value = data[i];
		unsigned int index = i;
		for (unsigned int j=i+1; j<data.size(); ++j) {
			if (value > data[j]) {
				value = data[j];
				index = j;
			}
		}
		int tmp = data[i];
		data[i] = value;
		data[index] = tmp;
	}
}

void print(vector<int> & data) {
	vector<int>::iterator it;
	for (it=data.begin(); it!=data.end(); it++) {
		cout << *it << ",";
	}
	cout << endl;
}


// ////////////-------------------------------------------------------------
int main()
{
	dout("Debug");
	vector<int> data;
	for (int i=0; i<1000000; ++i) {
		//data.push_back(rand()%1000);
		data.push_back(i);
	}

	//print(data);
	Sort *s = new QuickSort();
	auto start = high_resolution_clock::now();
	s->sort(data);

	//print(data)
	auto ende  = high_resolution_clock::now();
	cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start).count() << " ns"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start).count() << " ms"<<endl;
	cout << endl << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start).count() << " s"<<endl;

	return 0;
}


