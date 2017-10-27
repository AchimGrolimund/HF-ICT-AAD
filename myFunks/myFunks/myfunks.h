#ifndef MYFUNKS_H
#define MYFUNKS_H

#include <ctime>
#include <random>
#include <vector>
#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

	class myArray{
		public:
			template<class T>
			static void fillRandom(T *myArray, unsigned int myARRAY_SIZE, T myMaxVal, T myMinVal);
	};
	//*****************************************************************************************************************
	//Ende myArray
	//*****************************************************************************************************************
	template<class T>
	class myVector{
		public:

			static void fillRandom_back(std::vector<T> &myVector, unsigned int myVector_SIZE, T myMaxVal, T myMinVal);
	};
	//*****************************************************************************************************************
	//Ende myVector
	//*****************************************************************************************************************
	class myTime{
		public:
			static time_point<std::chrono::_V2::system_clock>  start();
			static void stop(time_point<std::chrono::_V2::system_clock> start_time,time_point<system_clock> ende);
	};

#endif // MYFUNKS_H

	//*****************************************************************************************************************

	template<class T>
	void myArray::fillRandom(T *myArray, unsigned int myARRAY_SIZE, T myMaxVal, T myMinVal)
	{
		if(myMinVal < 0){
			srand(static_cast<unsigned>(time(NULL)));

			for(unsigned int i(0); i < myARRAY_SIZE; i++){
				myArray[i] = rand() % (myMaxVal * 2) + myMinVal;
			}
		}else{
			for(unsigned int i(0); i < myARRAY_SIZE; i++){
				myArray[i] = rand() % myMaxVal - myMinVal;
			}
		}
	}
	//*****************************************************************************************************************
	//Ende myArray
	//*****************************************************************************************************************

	template<class T>
	void myVector<T>::fillRandom_back(std::vector<T> &myVector, unsigned int myVector_SIZE, T myMaxVal, T myMinVal)
	{
		if(myMinVal < 0){
			srand(static_cast<unsigned>(time(NULL)));

			for(unsigned int i(0); i < myVector_SIZE; i++){
				myVector.push_back(rand() % (myMaxVal * 2) + myMinVal);
			}

		}else{
			for(unsigned int i(0); i < myVector_SIZE; i++){
				myVector.push_back(rand() % myMaxVal - myMinVal);
			}
		}
	}


	//*****************************************************************************************************************
	//Ende myVector
	//*****************************************************************************************************************

	time_point<std::chrono::_V2::system_clock> myTime::start()
	{
		return high_resolution_clock::now();
	}

	void myTime::stop(time_point<system_clock> start_time, time_point<system_clock> ende=high_resolution_clock::now())
	{
		cout << endl << "Zeit: " << std::chrono::duration_cast<nanoseconds>(ende-start_time).count() << " Nanoseconds"<<endl;
		cout << "Zeit: " << std::chrono::duration_cast<microseconds>(ende-start_time).count() << " Microseconds"<<endl;
		cout << "Zeit: " << std::chrono::duration_cast<milliseconds>(ende-start_time).count() << " Milliseconds"<<endl;
		cout << "Zeit: " << std::chrono::duration_cast<seconds>(ende-start_time).count() << " Seconds"<<endl;
	}




