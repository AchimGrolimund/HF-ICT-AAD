/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"

using namespace std;

int search(vector<int> & data, int element, int left, int right, int & counter) {
  counter++;
  if (left > right) {
	return -1;
  }
  int mid = (left + right) / 2;
  if (data[mid] == element) {
	return mid;
  }

  if (element < data[mid]) {
	return search(data, element, left, mid-1, counter);
  } else {
	return search(data, element, mid+1, right, counter);
  }
}

int search(vector<int> & data, int element) {
  int counter = 0;
  int result = search(data, element, 0, data.size()-1, counter);
  cout << "Counter: " << counter << endl;
  return result;
}

int main() {

  const int N = 100;
  vector<int> v;
  for (int i=0; i<N; i++) {
	v.push_back(rand()%10000);
  }
  sort(v.begin(), v.end());

  vector<int>::iterator it;
  for (it=v.begin(); it!=v.end(); it++) {
	cout << *it << ", ";
  }
  cout << endl;

  cout << search(v, 5368) << endl;
  cout << search(v, 6000) << endl;
  cout << search(v, 12) << endl;
  cout << search(v, 9956) << endl;

  return 0;
}

