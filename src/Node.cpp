#include "Node.hpp"
#include <string>

Node::Node(void* d) {
    data = d;
    neighboursSize = 0;
    neighbours; // TODO
}

void* Node::getData() {
    return data;
}

void Node::addNeighbour(Node* n) {
    // TODO
}

Node** Node::getNeighbours() {
    return neighbours;
}

std::string Node::toString() {
    // TODO
    std::string out = "";
    for (int i = 0; i < neighboursSize; i++) {

    }
    return out;
}
