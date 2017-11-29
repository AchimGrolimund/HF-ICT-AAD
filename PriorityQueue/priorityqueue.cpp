#include "priorityqueue.h"
#include <bits/stdc++.h> //Alle benötigten Includes

/**
 * @brief priorityQueue::priorityQueue
 */
priorityQueue::priorityQueue() {
	std::for_each(values.begin(), values.end(), [](int &value) {
		value = -1;
	});
	this->size = 0;
}

/**
 * @brief priorityQueue::insert
 * @param value
 *
 */
void priorityQueue::insert(int value) {
	if (this->size == 0) {
		values[static_cast<unsigned>(size)] = value;
		this->size++;
	} else {
		values[static_cast<unsigned>(size)] = value;
		this->size++;
		swabPrioQueue();
	}
}

/**
 * @brief priorityQueue::printPriotityQueue
 */
void priorityQueue::printPriotityQueue() {
	int counter(0);
	std::for_each(values.begin(), values.end(), [&counter](int &value) {
		if (value != -1) {
			std::cout << counter << ". " << value << "\n";
			counter++;
		}
	});
	std::cout << "\n";
}

/**
 * @brief priorityQueue::insertRandom
 * @param maxValue
 */
void priorityQueue::insertRandom(int maxValue) {
	for (unsigned int i(0); i < PQ_SIZE; ++i) {
		insert(std::rand() % maxValue);
	}
}

/**
 * @brief priorityQueue::extractMin
 * @return
 */
int priorityQueue::extractMin() {
	int firstElement = this->values[0];
	this->values[0] = this->values[static_cast<unsigned>(size - 1)];
	this->values[static_cast<unsigned>(size - 1)] = -1;
	this->size--;
	swabPrioQueue();
	return firstElement;
}

/**
 * @brief priorityQueue::getSize
 * @return
 */
int priorityQueue::getSize() {
	return this->size;
}

/**
 * @brief priorityQueue::swabPrioQueue_rek
 * @param i
 *
 * (i - 1) / 2 == Links   //Unsicher
 * (i - 2) / 2 == Rechts  //Unsicher
 */
void priorityQueue::swabPrioQueue_rek(int i) {
	int tmp(0);
	if (i <= 0) {
		return;
	}
	if (i % 2 == 0) { //Right element
		if (values[static_cast<unsigned>(i)] < values[static_cast<unsigned>((
					i - 2) / 2)]) {
			tmp = values[static_cast<unsigned>(i)];
			values[static_cast<unsigned>(i)] = values[static_cast<unsigned>((i - 2) / 2)];
			values[static_cast<unsigned>((i - 2) / 2)] = tmp;
			tmp = 0;
		}
		i = (i - 2) / 2;
	} else { //Left element
		if (values[static_cast<unsigned>(i)] < values[static_cast<unsigned>((
					i - 1) / 2)]) {
			tmp = values[static_cast<unsigned>(i)];
			values[static_cast<unsigned>(i)] = values[static_cast<unsigned>((i - 1) / 2)];
			values[static_cast<unsigned>((i - 1) / 2)] = tmp;
			tmp = 0;
		}
		i = (i - 1) / 2;
	}
	swabPrioQueue_rek(i);
}

/**
 * @brief priorityQueue::swabPrioQueue
 */
void priorityQueue::swabPrioQueue() {
	//swabPrioQueue_rek(this->size - 1);
	for (int i = this->size - 1; i > 0; i--) {
		swabPrioQueue_rek(i);
	}
}
