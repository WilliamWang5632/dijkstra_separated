#pragma once
#include <iostream>

using namespace std;

// number of nodes per line
const int NODES_PER_ROW = 7; // 7

// example of instanciation:
// Node n21 = Node(2, 1);
// or
// Node n21 = Node(7);

class Node
{
public:
    // default constructor
    Node();

    /** Node constructor with 1 parameter
    @param identifier identifier of Node instance
    */
    Node(int identifier);

    /** Node constructor with 2 parameters
    @param x x coordinate of Node instance
    @param y y coordinate of Node instance
    */
    Node(int x, int y);

    // prints node coordinates
    void printCoordinates();

    /*
    prints Node id, x coordinate and y coordinate
    */
    void printInfo();

    int id;
    int x_position;
    int y_position;
    bool is_available;
};