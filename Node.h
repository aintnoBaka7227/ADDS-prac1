#ifndef NODE_H
#define NODE_H

class Node {
    private:
    int data;
    Node* link;
    public:
    friend class LinkedList;
    Node(int data, Node* link);
};

#endif