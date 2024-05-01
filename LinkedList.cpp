#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
	if (pos1 < 0 || pos2 < 0) {
		return false;
	}
	if (pos1 == pos2) {
		return true;
	}
	Node* prev1 = head;
	Node* prev2 = head;
	for (int i = 0; i < pos1 - 2; i++) {
		if (prev1->link == nullptr) {
			return false;
		}
		prev1 = prev1->link;
	}
	for (int i = 0; i < pos2 - 2; i++) {
		if (prev2->link == nullptr) {
			return false;
		}
		prev2 = prev2->link;
	}
	Node* after1 = prev1->link->link;
	Node* after2 = prev2->link->link;

	Node* temp_current1 = prev1->link;
	prev1->link = prev2->link;
	prev1->link->link = after1;

	prev2->link = temp_current1;
	prev2->link->link = after2;
	return true;
}

bool LinkedList::find_and_delete(int target) {
    Node* prev_node = head;
    Node* current_node = head;
    while (current_node != nullptr) {
        if (current_node->data == target) {
            Node* temp = current_node;
            prev_node->link = current_node->link;
            delete temp;
            return true;
        }
        prev_node->link = current_node;
        current_node=current_node->link;
    }
    return false;
}