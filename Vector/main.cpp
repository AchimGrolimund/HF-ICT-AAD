/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *
 *

 *
 *
 * @Version:	1.0.0
 * @Author:		Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:		%DATE%
 *
 * @Description:
 *
 * Beispiel:
 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/
#include <iostream>
#include <ctime>
#include <vector>
#include <deque>
#include <list>

using namespace std;



int main()
{

	vector<int> v;
	deque<int> d;

	vector<int>::iterator it;

	for(int i = 0; i<10;i++){
		v.push_back(i);
	}

	v.insert(v.begin()+3,50);

	for(it=v.begin();it!=v.end();it++){
		cout <<*it<<endl;
	}

	return 0;
}
