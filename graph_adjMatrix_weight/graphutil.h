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
		static vector<int> getPath(Graph *g, int start, int end);
	private:
		static int getNextNode(vector<Entry> &data);
		static void getPath(vector<int> *path, vector<Entry> *entryVector, int start, int end);

};

#endif

