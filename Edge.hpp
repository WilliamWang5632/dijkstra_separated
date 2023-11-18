#pragma once
#include <iostream>
#include "Node.hpp"

using namespace std;

// example of instanciation
// Edge e11_21 = Edge(black, n11, n21);

class Edge
{
public:
    /**
     * constructor with parametres
    @param weightColor variable representing a colour that conveys the
     * numerical value associated with the weight of the edge
    @param node1 first node connected to the edge
    @param node2 second node connected to the edge
     */
    Edge(int weightColor, Node &node1, Node &node2);

    /*
    prints the weight as well as information of both connected nodes
    */
    void printInfo();

    int weight;
    Node *adjacentNodes[2];
};