#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

int main() {

    // first problem
    Truckloads truck1;
    std::cout << truck1.numTrucks(4,2) << std::endl;
    // second problem
    Reverser r;
    std::cout << r.reverseString("Adam") << std::endl;
    std::cout << r.reverseDigit(10) << std::endl;
    return 0;
}