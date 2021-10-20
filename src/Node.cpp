#include "Node.hpp"
#include <string>
#include <sstream>

Node::Node(void* data) {
    Node::data = data;
    Node::neighboursSize = 0;
    Node::neighbours; // TODO
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

std::ostream& operator<<(std::ostream& strm, const Node& node) {
    strm << node.data;
    strm << " -> ";
    return strm;
}
