#include "Node.hpp"
#include <iostream>

int main(int argc, char const* argv[]) {
    int n = 0;
    Node node(&n);
    std::cout << node.str() << std::endl;
    return 0;
}
