#include "Node.h"

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}

Node::Node() : data(0), link(nullptr) {

}