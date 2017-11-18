#ifndef GRAPHUTIL_H
#define GRAPHUTIL_H

#include <vector>
using namespace std;

class Graph;

class DijkstraEntry {
public:
  int node;
  int distance;
  bool marked;
  int predecessor;
};

class GraphUtil {
public:
  static vector<DijkstraEntry> dijkstra(Graph *g, int start);

};

#endif

