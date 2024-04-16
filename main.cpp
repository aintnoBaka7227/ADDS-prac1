#include <iostream>
#include <sstream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    
    std::stringstream ss;
    std::string nums;
    std::getline(std::cin, nums);
    ss << nums;
    std::vector<int> list;
    int num = 0;
    while (ss >> num) {
        list.push_back(num);
    }

    QuickSort quick_sort;
    RecursiveBinarySearch search;
    std::vector<int> sorted_list = quick_sort.sort(list);
    std::cout << search.search(list, 1) << " ";
    for (int i = 0; i < sorted_list.size(); i++) {
        std::cout << sorted_list[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}