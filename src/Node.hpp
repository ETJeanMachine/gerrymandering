#ifndef NODE_HPP
#define NODE_HPP

#include <string>

/**
 * @brief A parameterized data structure that holds data. A node has two
 *        primary aspects - the data that the node holds, and a list of
 *        neighbouring nodes.
 *
 * @tparam T The class of data that this node will hold.
 */
class Node {
private:
    friend std::ostream& operator<<(std::ostream&, const Node&);
    Node** neighbours; // Array of neighbouring nodes to this node.
    int neighboursSize; // The current size of the neighbours array
    void* data; // The data stored at this node.
public:
    /**
     * @brief Construct a new Node object
     *
     * @param data The data we're storing at this node.
     */
    Node(void* data);
    /**
     * @brief Get the data currently at this node.
     *
     * @return void* Return the data at this node (can be any type).
     */
    void* getData();
    /**
     * @brief Adds a neighbour to the list of nodes.
     *
     * @param n The node we wish to add.
     */
    void addNeighbour(Node* n);
    /**
     * @brief Get the list of neighbours of this node.
     *
     * @return Node** All the neighbouring nodes.
     */
    Node** getNeighbours();
};

#endif