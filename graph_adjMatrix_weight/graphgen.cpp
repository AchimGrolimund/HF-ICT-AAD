#include "graphgen.h"

#include "graph.h"

Graph* GraphGenerator::createGraph1() {
  Graph *g = new Graph();
  return g;
}

Graph* GraphGenerator::createGraph2() {
  Graph *g = new Graph();
  g->randomInit(100, 25);
  vector<int> n100 = {101};
  vector<int> n101 = {100};
  g->addNode(n100, n100);
  g->addNode(n101, n101);
  return g;
}

Graph* GraphGenerator::createGraph3() {
  Graph *g = new Graph();
  vector<int> n0 = {3, 5, 6, 7};
  vector<int> n1 = {0, 5};
  vector<int> n2 = {3, 6};
  vector<int> n3 = {3, 5};
  vector<int> n4 = {1, 2, 6, 7};
  vector<int> n5 = {3, 5, 8};
  vector<int> n6 = {3, 5, 8};
  vector<int> n7 = {3, 5, 8};
  g->addNode(n0, n0);
  g->addNode(n1, n1);
  g->addNode(n2, n2);
  g->addNode(n3, n3);
  g->addNode(n4, n4);
  g->addNode(n5, n5);
  g->addNode(n6, n6);
  g->addNode(n7, n7);
  return g;
}

Graph* GraphGenerator::createGraph4() {
  Graph *g = new Graph();
  vector<int> n0 = {3, 5, 6};
  vector<int> n1 = {4, 6, 7};
  vector<int> n2 = {0, 1, 7};
  vector<int> n3 = {4, 5, 6};
  vector<int> n4 = {5};
  vector<int> n5 = {};
  vector<int> n6 = {};
  vector<int> n7 = {0};
  g->addNode(n0, n0);
  g->addNode(n1, n1);
  g->addNode(n2, n2);
  g->addNode(n3, n3);
  g->addNode(n4, n4);
  g->addNode(n5, n5);
  g->addNode(n6, n6);
  g->addNode(n7, n7);
  return g;
}

Graph* GraphGenerator::createGraph5() {
  Graph *g = new Graph();
  vector<int> n0 = {3, 5, 6, 7};
  vector<int> n1 = {4, 6, 7};
  vector<int> n2 = {0, 1, 7};
  vector<int> n3 = {4, 5, 6};
  vector<int> n4 = {5, 7};
  vector<int> n5 = {};
  vector<int> n6 = {3};
  vector<int> n7 = {};
  g->addNode(n0, n0);
  g->addNode(n1, n1);
  g->addNode(n2, n2);
  g->addNode(n3, n3);
  g->addNode(n4, n4);
  g->addNode(n5, n5);
  g->addNode(n6, n6);
  g->addNode(n7, n7);
  return g;
}

