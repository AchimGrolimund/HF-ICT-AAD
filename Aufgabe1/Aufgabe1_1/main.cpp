#include <iostream>
#include <ctime>

using namespace std;
void foo(int *array, int size){
	clockid_t start, stop;
	start = clock();
	int sum = 0;
	int product = 1;
	for ( int i=0; i<size; i++) {
		sum += array[i];
	}
	for ( int i=0; i<size; i++) {
		product *= array[i];
	}
	cout << sum << "," << product << endl;
	stop = clock();
	cout<<(float)(stop-start)/CLOCKS_PER_SEC<<endl;
}


int main()
{

	int intSize(250000), intArray[250000];
	for(int i =0;i<intSize;i++){
		intArray[i] = i+1;
	}


	foo(intArray,intSize);

	return 0;
}
