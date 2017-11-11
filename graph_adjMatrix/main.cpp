/*===================================[ Algorithmen und Datenstrukturen]================================================================*
 *

 *
 * @Version:		1.0.0
 * @Author:			Achim Grolimund (achim.grolimund@hf-ict.info)
 * @Date:			01.1.2017
 *
 * @Description:

 *
 * Beispiel:

 *
 * Anmerkung:
 *
 *
 *==============================================[ EOF RDM ]=============================================================================*/

#define DEBUG
#include <bits/stdc++.h>

#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/myfunks.h"
#include "C:/Users/achim/Documents/Programming/C++/HF-ICT-AAD/myFunks/myFunks/debug.h"


using namespace std;

class SampleGraph {
	public:
		static vector<int>* create(int numberOfNodes, int numberOfConnections, bool isDirected);
		static void print(vector<int>* graph, int numberOfNodes);
};

//<--  -->
vector<int>* SampleGraph::create(int numberOfNodes, int numberOfConnections, bool isDirected=false) {
	vector<int>* result = new vector<int>[numberOfNodes];

	int counter = 0;
	while (counter < numberOfConnections) {
		int source = rand() % numberOfNodes;
		int target = rand() % numberOfNodes;
		if (source != target) {
			if (find(result[source].begin(), result[source].end(), target) == result[source].end()) {
				result[source].push_back(target);
				if(!isDirected) result[target].push_back(source);
				counter++;
			}
		}
	}
	for (int i=0; i<numberOfNodes; i++) {
		sort(result[i].begin(), result[i].end());
	}

	return result;
}

//<--  -->
void SampleGraph::print(vector<int>* graph, int numberOfNodes) {
	for (int i=0; i<numberOfNodes; i++) {
		vector<int>::iterator it;
		cout << "Node " << i << "\t";
		for (it=graph[i].begin(); it!=graph[i].end(); it++) {
			cout << *it << ", ";
		}
		cout << endl;
	}
}

//<-- Tiefensuche  -->
void dfs(vector<int>* graph, int numberOfNodes, bool *visited, int currentNode) {

	visited[currentNode] = true;
	cout << currentNode << ",";

	for(const auto &node : graph[currentNode]){
		if(!visited[node]){
			dfs(graph,numberOfNodes,visited,node);
		}
	}


}


void dfs(vector<int>* graph, int numberOfNodes) {
	bool *visited = new bool[numberOfNodes]{false};

	dfs(graph, numberOfNodes, visited, 0);

}


//<-- Breitensuche alle Nachbarn suchen -->
void bfs(vector<int>* graph, int numberOfNodes) {

}

//<--  -->
bool connected(vector<int>* graph, int numberOfNodes, int nodeA, int nodeB) {

}


int main() {
	srand(15);

	const int NUMBER_OF_NODES = 7;
	const int NUMBER_OF_CONNECTIONS = 12;

	vector<int>* graph = SampleGraph::create(NUMBER_OF_NODES, NUMBER_OF_CONNECTIONS);

	SampleGraph::print(
				SampleGraph::create(NUMBER_OF_NODES, NUMBER_OF_CONNECTIONS), NUMBER_OF_NODES);

	dfs(graph,NUMBER_OF_NODES);

	return 0;
}












