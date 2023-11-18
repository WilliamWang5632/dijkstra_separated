#pragma once
#include <iostream>
#include "Node.hpp"

using namespace std;

// example of instanciation:
// Node n21 = Node(2, 1);
// or
// Node n21 = Node(7);

// default Node constructor
Node::Node()
{
    id = 0;
    x_position = 1;
    y_position = 1;
    is_available = true;
}

/** Node constructor with 1 parameter
 @param identifier identifier of Node instance
*/
Node::Node(int identifier)
{
    x_position = identifier - NODES_PER_ROW * (identifier / NODES_PER_ROW) + 1;
    y_position = (identifier / NODES_PER_ROW) + 1;
    is_available = true;
    id = identifier;
}

/** Node constructor with 2 parameters
 @param x x coordinate of Node instance
 @param y y coordinate of Node instance
*/
Node::Node(int x, int y)
{
    x_position = x;
    y_position = y;
    is_available = true;
    id = NODES_PER_ROW * (y - 1) + x - 1;
}

// prints node coordinates
void Node::printCoordinates()
{
    cout << "(" << x_position << ", " << y_position << ")";
}

/*
prints Node id, x coordinate and y coordinate
*/
void Node::printInfo()
{
    cout << "id: " << id << endl;
    printCoordinates();
    cout << endl;
}
