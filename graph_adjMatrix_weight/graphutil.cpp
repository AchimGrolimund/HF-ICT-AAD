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
	for(int i(0); i < g->getNumberOfNodes(); i++){
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



