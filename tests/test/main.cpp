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
#include <iostream>
#include <ctime>

using namespace std;

int multiply(int, int);

	int main()
	{
	  cout<<"5 * 32 = "<<multiply(5,3)<<"\n";
	}

	int multiply(int num, int times)
	{
	  if(times==0) return 0;
	  return num + multiply(num,times-1);
	}
