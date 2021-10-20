#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <unordered_map>
#include "Node.hpp"

template<class T = void>
class Graph {
private:
    std::unordered_map<T, Node<T>*> map;
public:
    void createNode(T data) {
        map[data] = new Node<T>(data);
    }
    bool connectNodes(T data1, T data2) {
        if (map.find(data1) && map.find(data2))
            
    }
};

#endif