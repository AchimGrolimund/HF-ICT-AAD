#include "graph.h"
#include <bits/stdc++.h> //Alle benötigten Includes
#include <iostream>
#include <cstdlib>
#include "graphutil.h"

using namespace std;


//<-- überladung des << Operators -->
/**
 * @brief operator << for Dijkstra Vector<Entry>
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

/**
 * @brief operator << for gertPath Vector<int>
 * @param stream
 * @param obj
 * @return
 */
std::ostream & operator<<(std::ostream & stream, const vector<int> & obj)
{
	stream << "===== Path =====\n";
	for(auto x : obj){
		stream << x << "\t -> \t";
	}
	return stream;
}



int main(int argc, char **argv) {

	Graph g;
	GraphUtil gu;

	vector<Entry> EntryTable;
	vector<int> path;

	g.randomInit(5,8);
	cout << g << endl;

	EntryTable = gu.dijkstra(&g,0);

	//path = gu.getPath(&g, 2345, 3988);

	cout << path <<endl;

	return 0;
}



