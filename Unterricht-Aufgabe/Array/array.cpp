#include "array.h"

Array::Array(T size) : currentSize(size), maxSize(size) {
  values = new T[size];
}

Array::~Array(){}

Array::Array(const Array & obj) {}

Array Array::operator= (const Array & obj) {}

int Array::size() {}

void Array::add(int value) {}


//Grolimund & Bieli
int Array::get(int index, bool &ok) {
	if(!index < 0 && !index > this->currentSize ){
		return this->values[index];
	}
	return 0;

}


void Array::set(int index, int value, bool & ok) {}

void Array::remove(int index, bool & ok) {}
