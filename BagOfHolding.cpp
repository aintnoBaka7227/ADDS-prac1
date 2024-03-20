#include "BagOfHolding.h"
#include <iostream>
void BagOfHolding::addItem(std::string new_item) {
    items.push_back(new_item);
}

void BagOfHolding::removeItem(std::string current_item) {
    for (auto it = items.begin(); it != items.end(); it++) {
        if (*it == current_item) {
            items.erase(it);
        }
    }
}

void BagOfHolding::listItem() {
    for (auto it = items.begin(); it != items.end(); it++) {
        std::cout << *it << std::endl;
    }
}
