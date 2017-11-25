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

/**
 * @brief The SampleGraph class
 */
class SampleGraph {
	public:
		static vector<int>* create(int numberOfNodes, int numberOfConnections, bool isDirected);
		static void print(vector<int>* graph, int numberOfNodes);
};

/**
 * @brief SampleGraph::create
 * @param numberOfNodes
 * @param numberOfConnections
 * @param isDirected
 * @return
 */
vector<int>* SampleGraph::create(int numberOfNodes, int numberOfConnections, bool isDirected=false) {
	vector<int>* result = new vector<int>[numberOfNodes];

	int counter = 0;
	while (counter < numberOfConnections) {
		int source = rand() % numberOfNodes;
		int target = rand() % numberOfNodes;
		if (source != target) {
			if (find(result[source].begin(), result[source].end(), target) == result[source].end()) {
				result[source].push_back(target);
				if(!isDirected)
					result[target].push_back(source);
				counter++;
			}
		}
	}
	for (int i=0; i<numberOfNodes; i++) {
		sort(result[i].begin(), result[i].end());
	}


	return result;
}

/**
 * @brief SampleGraph::print
 * @param graph
 * @param numberOfNodes
 */
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


/**
 * @brief Tiefensuche Rekursiv
 * @param graph
 * @param numberOfNodes
 * @param visited
 * @param currentNode
 */
void dfs(vector<int>* graph, int numberOfNodes, bool *visited, int currentNode) {

	visited[currentNode] = true;
	cout << currentNode << ",";

	for(const auto &node : graph[currentNode]){
		if(!visited[node]){
			dfs(graph,numberOfNodes,visited,node);
		}
	}
}

/**
 * @brief Tiefensuche
 * @param graph
 * @param numberOfNodes
 */
void dfs(vector<int>* graph, int numberOfNodes) {
	bool *visited = new bool[numberOfNodes]{false};

	dfs(graph, numberOfNodes, visited, 0);

}


/**
 * @brief bfs
 * @param graph
 * @param numberOfNodes
 * @param visited
 * @param currentNode
 */
void bfs(vector<int>* graph, int numberOfNodes, bool *visited, int &currentNode) {
	if(currentNode >= numberOfNodes)return;

	if(!visited[currentNode]){
		cout << currentNode << " , ";
		visited[currentNode] = true;
	}


	for(const auto &node : graph[currentNode]){
		if(!visited[node]){
			visited[node] = true;
			cout << node<< " , ";
		}
	}
	currentNode++;
	bfs(graph,numberOfNodes,visited,currentNode);
}

/**
 * @brief bfs
 * @param graph
 * @param numberOfNodes
 */
void bfs(vector<int>* graph, int numberOfNodes) {
	int counter(0);

	bool *visited = new bool[numberOfNodes]{false};

	bfs(graph,numberOfNodes,visited,counter);

}


/**
 * @brief connected
 * @param graph
 * @param numberOfNodes
 * @param visited
 * @param currentNode
 * @param conVec
 */
void connected(vector<int>* graph,int numberOfNodes, bool *visited, int &currentNode, vector<int> *conVec){
	visited[currentNode] = true;
	conVec->push_back(currentNode);

	for(auto &node : graph[currentNode]){
		if(!visited[node]){
			connected(graph,numberOfNodes,visited,node,conVec);
		}
	}
}

/**
 * @brief connected
 * @param graph
 * @param numberOfNodes
 * @param nodeA
 * @param nodeB
 * @return
 */
bool connected(vector<int>* graph, int numberOfNodes, int nodeA, int nodeB) {

	vector<int> conVec;
	bool *visited = new bool[numberOfNodes]{false};
	connected(graph,numberOfNodes,visited,nodeA, &conVec);

	return find(conVec.begin(), conVec.end(), nodeB) != conVec.end();
}




/**
 * @brief shortestReach
 * @param graph
 * @param numberOfNodes
 * @param visited
 * @param currentNode
 * @param myPath
 */
void shortestReach(vector<int>* graph, int numberOfNodes, bool *visited, int currentNode,int targedNode, vector<vector<int>> *myPath) {
	if(currentNode == targedNode) return;

	visited[currentNode] = true;
	//cout << currentNode << ",";

	for(auto &node : graph[currentNode]){
		if(!visited[node]){
			myPath[currentNode][static_cast<unsigned>(node)].push_back(1);
			shortestReach(graph, numberOfNodes, visited, currentNode, targedNode, myPath);
		}
	}
}


/**
 * @brief shortestReach
 * @param graph
 * @param numberOfNodes
 * @param start
 * @param end
 * @return
 */
int shortestReach(vector<int>* graph, int numberOfNodes, int start, int end){
	if (start == end) return  0;
	if ((start < 0 || start > numberOfNodes) || (end < 0 || end > numberOfNodes)) return 0;
	vector<vector<int>> myPath;

	bool *visited = new bool[numberOfNodes]{false};
	shortestReach(graph, numberOfNodes, visited, start, end, &myPath);

	for(auto x : myPath){
		for(auto y : x){
			cout << y << " , ";
		}
	}

	return 0; // Probe

}



int main() {
	srand(15);

	const int NUMBER_OF_NODES = 7;
	const int NUMBER_OF_CONNECTIONS = 12;

	vector<int>* graph = SampleGraph::create(NUMBER_OF_NODES, NUMBER_OF_CONNECTIONS,true);

	SampleGraph::print(graph, NUMBER_OF_NODES);
	//dfs(graph,NUMBER_OF_NODES);
	//cout<<connected(graph,NUMBER_OF_NODES,0,1)<<"\n";
	//cout << shortestReach(graph,NUMBER_OF_NODES,3,2)<<"\n";



	return 0;
}












