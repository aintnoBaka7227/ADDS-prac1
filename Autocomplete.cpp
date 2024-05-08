#include "Autocomplete.h"
#include <iostream>

TrieNode::TrieNode() {
    isEndOfWord = false;
}

Autocomplete::Autocomplete() {
    root = nullptr;
}

void Autocomplete::insert(std::string word) {
    TrieNode *current = root;
    for (auto c : word) {
        std::string letter(1, c);
        if (current->children.find(letter) == current->children.end()) {
            TrieNode *newNode = new TrieNode();
            current->children.insert({letter, newNode});
        }
        current = current->children.find(letter)->second;
    }
    current->isEndOfWord = true;
}
