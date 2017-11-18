#include "graph.h"
#include <bits/stdc++.h> //Alle benötigten Includes
#include <iostream>
#include <cstdlib>
#include "graphutil.h"

using namespace std;

/**
 * @brief operator <<
 * @param stream
 * @param obj
 * @return
 */
std::ostream & operator<<(std::ostream & stream, const vector<Entry> & obj);


int main(int argc, char **argv) {

	Graph g;
	GraphUtil gu;
	vector<Entry> EntryTable;

	g.randomInit(6, 10);
	cout << g << endl;

	EntryTable = gu.dijkstra(&g,0);

	cout << EntryTable<<endl;

	return 0;
}


//<-- überladung des << Operators -->
/**
 * @brief operator <<
 * @param stream
 * @param obj
 * @return
 */
std::ostream & operator<<(std::ostream & stream, const vector<Entry> & obj)
{
	stream << "Node\t\tDistance\tMarked\t\tVorgaenger\n";
	for(auto x : obj){
		stream << x.nodeId << "\t -> \t";
		stream << x.distance << "\t -> \t";
		stream << x.marked << "\t -> \t";
		stream << x.predecessor << "\n";
	}
	return stream;
}
