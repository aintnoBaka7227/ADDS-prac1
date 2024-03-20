#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H
#include <vector>
#include <string>


class BagOfHolding {
    private:
    std::vector <std::string> items;
    public:
    void listItem();
    void addItem(std::string new_item);
    void removeItem(std::string current_item);
};

#endif