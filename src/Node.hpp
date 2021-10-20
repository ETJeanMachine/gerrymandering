#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <vector>
#include <sstream>

/**
 * @brief A parameterized data structure that holds data. A node has two
 *        primary aspects - the data that the node holds, and a list of
 *        neighbouring nodes.
 *
 * @tparam T The class of data that this node will hold.
 */
template<class T = void>
class Node {
private:
    std::vector<Node<T>*> neighbours; // Array of neighbouring nodes to this node.
    T* data; // The data stored at this node.
public:
    /**
     * @brief Construct a new Node object
     *
     * @param data The data we're storing at this node.
     */
    Node(T* data) {
        Node::data = data;
    }
    /**
     * @brief Get the data currently at this node.
     *
     * @return T* Return the data at this node (can be any type).
     */
    T* getData() {
        return data;
    }
    /**
     * @brief Adds a neighbour to the list of nodes.
     *
     * @param n The node we wish to add.
     */
    void addNeighbour(Node<T>* n) {
        neighbours.push_back(n);
    }
    /**
     * @brief Get the list of neighbours of this node.
     *
     * @return vector<Node<T>> All the neighbouring nodes.
     */
    std::vector<Node<T>> getNeighbours() {
        return neighbours;
    }
    /**
     * @brief Returns this value as a string.
     * 
     * @return std::string The string representation of the node.
     */
    std::string str() {
        std::string str = std::to_string(*data);
        str += " -> {";
        for (int i = 0; i < neighbours.size(); i++) {
            str += std::to_string(*neighbours[i]->data);
            if (i != neighbours.size() - 1)
                str += ", ";
        }
        str += "}";
        return str;
    }
};

#endif