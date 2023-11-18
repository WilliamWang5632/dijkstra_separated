#pragma once
#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"
#include "Graph.hpp"

#include "memoryDebug.cpp"

using namespace std;

// example of instanciation
// Graph graph1(28);

// default constructor
// graph with a single node with no edges
// initialize empty adjacency matrix
Graph::Graph()
{
    nEdges = 0;
    nNodes = 1;
    adjacencyMatrix = new int *[nNodes];
    for (int i = 0; i < nNodes; ++i)
    {
        adjacencyMatrix[i] = new int[nNodes];
        // Initialize the matrix with -1
        for (int j = 0; j < nNodes; ++j)
        {
            adjacencyMatrix[i][j] = -1;
        }
    }
}

/**
 * constructor with parameters
@param nNodesP number of nodes in the graph
*/
Graph::Graph(int nNodesP)
{
    // Creates matrix
    nEdges = 0;
    nNodes = nNodesP;
    adjacencyMatrix = new int *[nNodesP];
    for (int i = 0; i < nNodesP; i++)
    {
        adjacencyMatrix[i] = new int[nNodesP];
        // Initialize the adjacency matrix with -1
        for (int j = 0; j < nNodesP; j++)
        {
            adjacencyMatrix[i][j] = -1;
        }
    }
}

/**
 * adds an edge to the graph and updates adjacency matrix
 @param edge Edge instance that will be added to graph
 */
void Graph::addEdge(Edge &edge)
{
    // Add an edge between vertex1 and vertex2
    // Assumes an undirected graph
    int node1id = edge.adjacentNodes[0]->id;
    int node2id = edge.adjacentNodes[1]->id;

    adjacencyMatrix[node1id][node2id] = edge.weight;
    adjacencyMatrix[node2id][node1id] = edge.weight;
    nEdges++;
}

/**
 * displays entire adjacency matrix
 */
void Graph::displayMatrix()
{
    cout << "adjacency matrix: " << endl;

    for (int i = 0; i < nNodes; ++i)
    {
        cout << "Node " << i << ": ";
        for (int j = 0; j < nNodes; ++j)
        {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * displays adjacency list
 */
void Graph::displayList()
{
    // Display the adjacency list
    cout << "adjacency list" << endl;
    for (int i = 0; i < nNodes; ++i)
    {
        cout << "Node " << i << ": ";
        for (int j = 0; j < nNodes; ++j)
        {
            if (adjacencyMatrix[i][j] > 0)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

/**
 * the rows and columns corresponding to the selected node
 * in the adjacency matrix will be reset to -1 eliminating
 * all connections to it
 @param node node that will be removed from graph
 */
void Graph::removeNode(Node &node)
{
    int id = node.id;
    for (int i = 0; i < nNodes; i++)
    {
        adjacencyMatrix[id][i] = -1;
        adjacencyMatrix[i][id] = -1;
    }
}
