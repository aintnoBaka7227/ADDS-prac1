#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int key) {
    return recursiveBinarySearch(list, key, 0, list.size() - 1);
}

bool RecursiveBinarySearch::recursiveBinarySearch(std::vector<int>& list, int key, int start, int end) {
    if (start == end) {
        if (key == list.at(start)) {
            return true;
        }
        else {
            return false;
        }
    }
    int mid = (end + start)/2;
    if (key == list.at(mid)) {
        return true;
    }
    else {
        if (key < list.at(mid)) {
            recursiveBinarySearch(list, key, start, mid);
        }
        else {
            recursiveBinarySearch(list, key, mid, end);
        }
    }
    return false;
}

