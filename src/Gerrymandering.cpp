#include "Node.hpp"
#include <iostream>
#include <string>

int main(int argc, char const* argv[]) {
    int a = 1;
    Node<int> node(&a);
    for (int i = 2; i < 6; i++) {
        int* x = new int;
        *x = i;
        node.addNeighbour(new Node<int>(x));
    }
    std::cout << node.str() << std::endl;
    return 0;
}
