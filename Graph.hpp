#pragma once
#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

#include "memoryDebug.cpp"

using namespace std;

// example of instanciation
// Graph graph1(28);
class Graph{
public:
    // default constructor
    // graph with a single node with no edges
    // initialize empty adjacency matrix
    Graph();

    /**
     * constructor with parameter
    @param nNodesP number of nodes in the graph
    */
    Graph(int nNodesP);
    
    /**
     * adds an edge to the graph and updates adjacency matrix
     @param edge Edge instance that will be added to graph 
     */
    void addEdge(Edge& edge);

    /**
     * displays entire adjacency matrix 
     */
    void displayMatrix();
    
    /**
     * displays adjacency list
     */
    void displayList();

    /**
     * the rows and columns corresponding to the selected node
     * in the adjacency matrix will be reset to -1 eliminating
     * all connections to it
     @param node node that will be removed from graph
     */
    void removeNode(Node& node);

    //~Graph(){}

    int nNodes;
    int nEdges;
    int** adjacencyMatrix;
};


