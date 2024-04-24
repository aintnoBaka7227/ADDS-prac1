#include "LinkedList.h"
#include <iostream>
LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    head = new Node(array[0], nullptr);
    Node* current_node = head;
    for (int i = 1; i < len; i++) {
        Node* new_node = new Node(array[i], nullptr);
        current_node->link = new_node;
        current_node = current_node->link;
    }
}

LinkedList::~LinkedList() {

}

void LinkedList::insertPosition(int pos, int newNum) {
    if (pos <= 1) {
        Node* new_node = new Node(newNum, head);
        head = new_node;
        return;
    }
    
    
      
}

bool LinkedList::deletePosition(int pos) {

}

int LinkedList::get(int pos) {

}

int LinkedList::search(int target) {

}

void LinkedList::printList() {
    if (head == nullptr)  {
        return;
    }
    else {
        Node* current_node = head;
        std::cout << "[ ";
        while (current_node != nullptr) {
           std::cout << current_node->data << " ";
           current_node = current_node->link; 
        }
        std::cout << "]";
    }
}

