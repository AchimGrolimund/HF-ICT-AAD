#include "graphutil.h"
#include "graph.h"
#include <bits/stdc++.h> //Alle benötigten Includes

/**
 * @brief GraphUtil::getNextNode
 * @param data
 * @return
 */
int GraphUtil::getNextNode(vector<Entry> &data)
{
	int id(-1), distance(-1);
	bool first = true;

	for(auto &x : data){
		if(x.marked != true){
			if(first){
				id = x.nodeId;
				distance = x.distance;
				first = false;
			}else{
				if(x.distance < distance){
					id = x.nodeId;
					distance = x.distance;
				}
			}
		}
	}
	return id;
}


/**
 * @brief GraphUtil::dijkstra
 * @param g
 * @param start
 * @return
 */
vector<Entry> GraphUtil::dijkstra(Graph *g, int start) {
	vector<Entry> entryVector;


	// <-- Initial the Entry Obj -->
	for(unsigned int i(0); i < g->getNumberOfNodes(); i++){
		Entry entry;
		entry.nodeId = static_cast<unsigned>(i);
		entry.distance = INT_MAX;
		entry.marked = false;
		entry.predecessor = -1;
		entryVector.push_back(entry);
	}

	entryVector[static_cast<unsigned>(start)].distance = 0;
	entryVector[static_cast<unsigned>(start)].predecessor = start;

	int id = getNextNode(entryVector);

	while(id != -1){

		vector<int> nachbarn = g->getNeighbours(id);
		vector<int> kosten = g->getWeights(id);
		int current_cost = entryVector[static_cast<unsigned>(id)].distance;

		for (unsigned int i(0); i < nachbarn.size(); ++i) {
			int nachbar = nachbarn[i];
			int cost = kosten[i];
			int totalcost = current_cost + cost;

			if(entryVector[static_cast<unsigned>(nachbar)].distance > totalcost){
				entryVector[static_cast<unsigned>(nachbar)].distance = totalcost;
				entryVector[static_cast<unsigned>(nachbar)].predecessor = id;
			}
		}

		entryVector[static_cast<unsigned>(id)].marked = true;
		id = getNextNode(entryVector);
	}


	return entryVector;
}

/**
 * @brief GraphUtil::getPath
 * @param g
 * @param start
 * @param end
 * @return
 */
vector<int> GraphUtil::getPath(Graph *g, int start, int end)
{
	vector<Entry> entryVector;
	vector<int> path;

	entryVector = dijkstra(g, start);
	getPath(&path, &entryVector, start, end);


	return path;
}


/**
 * @brief GraphUtil::getPath
 * @param path
 * @param entryVector
 * @param start
 * @param last
 */
void GraphUtil::getPath(vector<int> *path, vector<Entry> *entryVector, int start, int last){

	if(entryVector->at(static_cast<unsigned>(last)).predecessor == -1){
		path->push_back(-1); return;
	}

	path->push_back(last);

	if(start == last) {
		return;
	}
	getPath(path,entryVector,start,entryVector->at(static_cast<unsigned>(last)).predecessor);
}


/**
 * @brief GraphUtil::hasCycle
 * @param g
 * @return
 */
bool GraphUtil::hasCycle(Graph *g) {
  vector<int> path;
  vector<bool> visited(g->getNumberOfNodes());
  bool allNodesAreVisited = false;
  while (!allNodesAreVisited && visited.size() > 0) {
	int node = -1;
	for (int i=0; i<visited.size(); i++) {
	  if (!visited[i]) {
		node = i;
		break;
	  }
	}
	if (node == -1) {
	  allNodesAreVisited = true;
	} else {
	  bool result = hasCycle(g, node, visited, path);
	  if (result) {
		return true;
	  }
	}
  }
  return false;
}


/**
 * @brief GraphUtil::hasCycle
 * @param g
 * @param node
 * @param visited
 * @param path
 * @return
 */
bool GraphUtil::hasCycle(Graph *g, int node, vector<bool> & visited, vector<int> & path) {
  visited[node] = true;
  if (find(path.begin(), path.end(), node) != path.end()) {
	return true;
  }
  path.push_back(node);

  for (int n : g->getNeighbours(node)) {
	bool result = hasCycle(g, n, visited, path);
	if (result) {
	  return true;
	}
  }

  path.pop_back();
  return false;
}







