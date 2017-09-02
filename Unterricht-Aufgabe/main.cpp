#include <iostream>
#include <string>

using namespace std;

class MyClass
{
	private:
		int x;
	public:
		int getX() const;
		void setX(int x);
		bool operator <(const MyClass &obj);
};

// myclass obj vergleichen mit dem < operator
bool MyClass::operator <(const MyClass &obj){
	return x < obj.getX();
}

int MyClass::getX() const{
	return x;
}

void MyClass::setX(int x){
	this->x = x;
}

//Template funktion
template<class T>
T getSmallest(T *array, int size){
	T check = array[0];
	for(int i = 0; i < size; i++){
		if(array[i]<check){
			check=array[i];
		}
	}
	return check;
}


int main()
{
	int iarray[] = {2,3,5,7,8,9};
	int iminElement = getSmallest<int>(iarray,6);

	float farray[] = {2.2,3,1,1.9,0.1};
	float fminElement = getSmallest<float>(farray,5);

	char carray[] = {'a','c','S','Z'};
	char cminElement = getSmallest<char>(carray,4);

	string sarray[] = {"AAB","AAC","ABC"};
	string sminElement = getSmallest<string>(sarray,3);

	MyClass mcarray[5];

	for(int i = 0; i<5;i++){
		mcarray[i].setX(rand()%1000);
	}

	MyClass mcMinElement = getSmallest<MyClass>(mcarray,5);



	cout<<"iminElement--> "<<iminElement<<endl;
	cout<<"fminElement--> "<<fminElement<<endl;
	cout<<"cminElement--> "<<cminElement<<endl;
	cout<<"sminElement--> "<<sminElement<<endl;

	return 0;
}
