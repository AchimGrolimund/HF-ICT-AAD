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
#include <map>
#include <string>
#include <set>

using namespace std;

string creatRandomString(int n){
	srand(time(0));
	string result = "";
	for(int i = 0; i<n;i++){
		char ch = 'A' + rand()%26;
		result += ch;
	}
	return result;
}


int main()
{
	map<char,int> cc;
	map<char,int>::iterator it;

	string input= creatRandomString(20);



	set<char> set_list;
	for(unsigned int i = 0; i < input.length(); i++) {
		set_list.insert(input.at(i));
	}
	cout<<set_list.size()<<endl;





	//	for(unsigned int i = 0; i <input.length();i++){
	//		char ch =input.at(i);
	//		if(cc.find(ch)==cc.end()){
	//			cc.insert(pair<char,int>(ch,1));
	//		}else{
	//			cc.at(ch)++;
	//		}
	//	}




	return 0;
}
