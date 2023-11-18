#pragma once
#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"
#include "Graph.hpp"

#include "memoryDebug.cpp"

using namespace std;

// example of instanciation
// Path path1 = Path(n11, graph1);
class Path
{
public:
    // default constructor
    // single node graph with start at (1, 1)
    Path();

    /**
     * constructor with parameters
     @param startingPoint starting node
     @param graph graph that the path will take place in
     */
    Path(Node &startingPoint, Graph &graph);

    // print the ids of all nodes in path in order as well as the totalCost
    void print(bool isId);

    //~Path() {}

    int nNodes;
    int totalCost;
    Node start;
    Node current;
    Node *nodeArray;
    Graph playground;
};