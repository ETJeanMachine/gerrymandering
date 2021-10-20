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
    // friend std::ostream& operator<<(std::ostream&, const Node&);
    std::vector<Node<T>> neighbours; // Array of neighbouring nodes to this node.
    int neighboursSize; // The current size of the neighbours array
    T* data; // The data stored at this node.
public:
    /**
     * @brief Construct a new Node object
     *
     * @param data The data we're storing at this node.
     */
    Node(T* data) {
        Node::data = data;
        Node::neighboursSize = 0;
    }
    /**
     * @brief Get the data currently at this node.
     *
     * @return void* Return the data at this node (can be any type).
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

    }
    /**
     * @brief Get the list of neighbours of this node.
     *
     * @return Node** All the neighbouring nodes.
     */
    std::vector<Node<T>> getNeighbours() {
        return neighbours;
    }
};

#endif