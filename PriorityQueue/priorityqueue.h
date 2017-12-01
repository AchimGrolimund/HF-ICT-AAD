#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include <array>

//Array grösse
#define PQ_SIZE 7


class priorityQueue {
  public:
	priorityQueue();


	void insert(int value);
	void printPriotityQueue();
	void insertRandom(int maxValue);

	int extractMin();
	int getSize();
	unsigned int getHeight();

  private:
	int size;

	std::array<int, PQ_SIZE> values;

	void swabPrioQueue();
	void swabPrioQueue_rek(int i);


};

#endif // PRIORITYQUEUE_H
S
