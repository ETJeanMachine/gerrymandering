#include "Node.hpp"
#include <iostream>
#include <string>

int main(int argc, char const* argv[]) {
    int a = 1;
    Node node(&a);
    std::cout << node << std::endl;
    return 0;
}
