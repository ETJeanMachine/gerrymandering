#include <iostream>
#include <string>
#include "Node.hpp"
#include "Graph.hpp"

int main(int argc, char const* argv[]) {
    Graph<int> graph;
    for (int i = 0; i < 9; i++) {
        graph.createNode(i);
    }
    return 0;
}
