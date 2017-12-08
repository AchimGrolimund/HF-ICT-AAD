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
 * @brief Insert value to PriorityQueue
 * @param int value
 */
void priorityQueue::insert(int value) {
	if (this->size == 0) {
		values[static_cast<unsigned>(size)] = value;
		this->size++;
	} else {
		values[static_cast<unsigned>(size)] = value;
		this->size++;
		swapPrioQueue(false);
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
		insert(std::rand() % maxValue + 1);
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
	swapPrioQueue(true);
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
 * @brief priorityQueue::getHeight
 * @return
 */
unsigned int priorityQueue::getHeight() {
	unsigned int result(0);
	if (this->size < 1) {
		return 0;
	}
	for (int i(0); i < this->size - 1; ++i) {
		if (i % 2 != 0) {
			if (values[static_cast<unsigned>((i - 1) / 2)] > 0) {
				result++;
			}
		}
	}
	return result;
}

/**
 * @brief priorityQueue::swabPrioQueue_rek
 * @param i
 *
 * (i - 1) / 2 == Links   //Unsicher
 * (i - 2) / 2 == Rechts  //Unsicher
 */
void priorityQueue::swapPrioQueueUp_rek(int i) {
	int tmp(0);
	if (i <= 0) {
		return;
	}
	if (i % 2 == 0) { //Right element
		if (values[static_cast<unsigned>(i)] < values[static_cast<unsigned>((
					i - 2) / 2)]) {
			tmp = std::move(values[static_cast<unsigned>(i)]);
			values[static_cast<unsigned>(i)] = std::move(values[static_cast<unsigned>((
												   i - 2) / 2)]);
			values[static_cast<unsigned>((i - 2) / 2)] = std::move(tmp);
			tmp = 0;
		}
		i = (i - 2) / 2;
	} else { //Left element
		if (values[static_cast<unsigned>(i)] < values[static_cast<unsigned>((
					i - 1) / 2)]) {
			tmp = std::move(values[static_cast<unsigned>(i)]);
			values[static_cast<unsigned>(i)] = std::move(values[static_cast<unsigned>((
												   i - 1) / 2)]);
			values[static_cast<unsigned>((i - 1) / 2)] = std::move(tmp);
			tmp = 0;
		}
		i = (i - 1) / 2;
	}
	swapPrioQueueUp_rek(i);
}

/**
 * @brief priorityQueue::swapPrioQueueUp_rek
 * @param i
 * i*2+1
 * i*2+2
 */
void priorityQueue::swapPrioQueueDown_rek(int i) {
	int tmp(0);
	if (i <= 0) {
		return;
	}
	if (((i % 2 == 0)  && ((i * 2 + 2) < this->size - 1)) ||
			(i * 2 + 1 < this->size - 1)) { //Right element
		if (values[static_cast<unsigned>(i)] > values[static_cast<unsigned>
				(i * 2 + 2)]) {
			tmp = std::move(values[static_cast<unsigned>(i)]);
			values[static_cast<unsigned>(i)] = std::move(values[static_cast<unsigned>
											   (i * 2 + 2)]);
			values[static_cast<unsigned>(i * 2 + 2)] = std::move(tmp);
			tmp = 0;
		}
		i = i * 2 + 2;
	} else { //Left element
		if (values[static_cast<unsigned>(i)] < values[static_cast<unsigned>
				(i * 2 + 1)]) {
			tmp = std::move(values[static_cast<unsigned>(i)]);
			values[static_cast<unsigned>(i)] = std::move(values[static_cast<unsigned>
											   (i * 2 + 1)]);
			values[static_cast<unsigned>(i * 2 + 1)] = std::move(tmp);
			tmp = 0;
		}
		i = i * 2 + 1;
	}
	swapPrioQueueUp_rek(i);
}

/**
 * @brief priorityQueue::swabPrioQueue
 */
void priorityQueue::swapPrioQueue(bool up) {
	if (up) {
		for (int i = this->size - 1; i > 0; i--) {
			swapPrioQueueUp_rek(i);
		}
	} else {
		for (int i = 1; i < this->size - 1; i++) {
			swapPrioQueueDown_rek(i);
		}
	}
}
