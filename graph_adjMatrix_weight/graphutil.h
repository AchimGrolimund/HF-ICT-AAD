#ifndef GRAPHUTIL_H
#define GRAPHUTIL_H

#include <vector>
using namespace std;

class Graph;

struct Entry {
		unsigned int nodeId;
		int distance;
		bool marked;
		int predecessor;
};

class GraphUtil {
	public:
		static vector<Entry> dijkstra(Graph *g, int start);
	private:
		static int getNextNode(vector<Entry> &data);

};

#endif

