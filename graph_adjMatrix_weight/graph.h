#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <sstream>
using namespace std;

class Graph {
private:
  vector< vector<int> > neighbours;
  vector< vector<int> > weights;
public:
  Graph();
  void randomInit(int nNodes=10, int nConnections=15, bool directed=false);
  int getNumberOfNodes();
  vector<int> getNeighbours(int node);
  vector<int> getWeights(int node);

  friend std::ostream& operator<<(std::ostream& s, const Graph & obj);
};

std::ostream& operator<<(std::ostream& s, const Graph & obj);

#endif
