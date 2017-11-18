#include "graph.h"

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

Graph::Graph() {
}

void Graph::randomInit(int nNodes, int nConnections, bool directed) {
	vector<int> v;
	for (int i=0; i<nNodes; i++) {
		neighbours.push_back(v);
	}
	int counter = 0;
	while (counter < nConnections) {
		int source = rand() % nNodes;
		int target = rand() % nNodes;
		if (source != target) {
			if (find(neighbours[static_cast<unsigned>(source)].begin(), neighbours[static_cast<unsigned>(source)].end(),
					 target) == neighbours[static_cast<unsigned>(source)].end()) {

				neighbours[static_cast<unsigned>(source)].push_back(target);
				if (!directed) {
					neighbours[static_cast<unsigned>(target)].push_back(source);
				}
				counter++;
			}
		}
	}
	for (unsigned int i=0; i<static_cast<unsigned>(nNodes); i++) {
		sort(neighbours[i].begin(), neighbours[i].end());
	}

	for (vector<int> v : neighbours) {
		vector<int> w;
		for (unsigned int i(0); i<v.size(); i++) {
			int cost = rand() % 20 + 1;
			w.push_back(cost);
		}
		weights.push_back(w);
	}

	if (!directed) {
		for (unsigned int i(0); i<weights.size(); i++) {
			for (unsigned int j(0); j<weights.at(i).size(); j++) {
				unsigned int source = i;
				int target = neighbours.at(i).at(j);
				int weight = weights.at(i).at(j);
				int index = find(neighbours.at(static_cast<unsigned>(target)).begin(), neighbours.at(static_cast<unsigned>(target)).end(),
								 source) - neighbours.at(static_cast<unsigned>(target)).begin();
				weights[static_cast<unsigned>(target)][static_cast<unsigned>(index)] = weight;
			}
		}
	}
}

unsigned int Graph::getNumberOfNodes() {
	return neighbours.size();
}

vector<int> Graph::getNeighbours(int node) {
	return neighbours.at(static_cast<unsigned>(node));
}

vector<int> Graph::getWeights(int node) {
	return weights.at(static_cast<unsigned>(node));
}

std::ostream& operator<<(std::ostream& s, const Graph & obj) {
	for (unsigned int i(0); i<obj.neighbours.size(); i++) {
		vector<int>::iterator it;
		s << "Node " << i << "\t";
		for (unsigned int j(0); j<obj.neighbours[i].size(); j++) {
			s << obj.neighbours[i].at(j) << "(" << obj.weights[i].at(j) << "), ";
		}
		s << endl;
	}
	return s;
}


