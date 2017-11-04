/*===================================[Test Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			21.10.2017
 *
 * @Description:
 *					Testnumber: 53288

 *==============================================[ EOF RDM ]=============================================================================*/

#include <bits/stdc++.h> //Alle benötigten Includes


using namespace std;

class Data
{
	public:
		int counter;
	private:

};


bool isBalanced(string);
int longestChar(string);
bool wordGame(string, string);

void wordGameTest() {
  cout << wordGame("heute ist ein schoener tag", "heute tag") << endl;
  cout << wordGame("heute ist ein schoener tag", "heute tag tag") << endl;
  cout << wordGame("das ist ein", "hallo welt") << endl;
  cout << wordGame("hallo welt", "welt hallo") << endl;
  cout << wordGame("hallo   welt", "welt hallo") << endl;
  cout << wordGame(" hallo welt ", "welt hallo") << endl;
  cout << wordGame(" hallo weltx ", "welt hallo") << endl;
}

void isBalancedTest() {
  cout << isBalanced("(){[(aa)bb]rr}") << endl;
  cout << isBalanced("(asb[sd]23{)}") << endl;
  cout << isBalanced(")()(") << endl;
  cout << isBalanced("((([[[]]]{{{}}})))") << endl;
  cout << isBalanced("abc(]efg") << endl;
  cout << isBalanced("abc{}efg") << endl;
  cout << isBalanced("mb(x){y}[z]bm") << endl;
  cout << isBalanced("mb(x){y}[z)bm") << endl;
  cout << isBalanced("mb(x){y}[z]bm}") << endl;
}

void longestCharTest() {
  cout << longestChar("avvgfbbbbedd") << endl;
  cout << longestChar("aaabbbcccddd") << endl;
  cout << longestChar("") << endl;
  cout << longestChar("abc") << endl;
  cout << longestChar("abbc") << endl;
  cout << longestChar("abcdddeff") << endl;
}

int main()
{
  //wordGameTest();
  isBalancedTest();
  //longestCharTest();

  /*
	cout <<"isBalanced = "<<isBalanced("(){[(aa)bb]rr}")<<endl; // gans schlecht && unvolständig
	cout <<"longestChar = "<<longestChar("aaaaaabbcdxxxxxeee")<<endl; // geht
	cout <<"wordGame = "<< wordGame("heute ist ein schoener tag","heute tag")<<endl; // geht
  */
	return 0;
}

bool isBalanced(string input){
	//
	// Prüft erst ob alle Klammern wider geschlossen sind
	// Keine Idee wie ich diese Aufgabe Lösen soll.
	//

	int open1(0); // ( )
	int open2(0); // [ ]
	int open3(0); // { }

	for (unsigned int i(0); i < input.size(); ++i) {
		switch (input.at(i)) {
			case '(':
				open1+=1;
				continue;
			case ')':
				open1 -=1;
				continue;
			case '[':
				open2 +=1;
				continue;
			case ']':
				open2 -=1;
				continue;
			case '{':
				open3 +=1;
				continue;
			case '}':
				open3 -=1;
				continue;
			default:
				continue;
		}
	}

	return open1 == 0 && open2 == 0 && open3 == 0 ? true : false;
}

//##########################

int longestChar(string input){
	int biggest(0);
	int temp(1);

	for(unsigned int i(0); i < input.size();i++){

		if(input[i] == input[i+1]){
			temp +=1;
		}else{
			if(temp > biggest){
				biggest = temp;
				temp = 1;
			}else{
				temp = 1;
			}
		}
	}
	return biggest;
}


bool wordGame(string s1, string s2){
	if(s1.size() < s2.size()){
		return  false;
	}
	vector<string> myVec;
	vector<string> myVec2;
	string myWord = "";
	unsigned int found(0);

	for (unsigned int i(0); i < s1.size(); ++i) {

		if(s1.at(i) != ' '){
			myWord += s1.at(i);
		}else{
			myVec.push_back(myWord);
			myWord = "";
		}
	}
	myVec.push_back(myWord);
	myWord = "";

	for (unsigned int j(0); j < s2.size(); ++j) {

		if(s2.at(j) != ' '){
			myWord += s2.at(j);
		}else{
			myVec2.push_back(myWord);
			myWord = "";
		}
	}
	myVec2.push_back(myWord);
	myWord = "";

	for(auto x : myVec2){
		for(auto y : myVec){
			if( y == x){
				found +=1;
			}
		}
	}
	return myVec2.size() == found ? true : false;
}
