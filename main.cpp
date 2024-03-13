#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

int main() {

    // first problem
    Truckloads truck1;
    std::cout << truck1.numTrucks(14,3) << std::endl;
    // second problem
    Reverser r;
    std::cout << r.reverseString("Adam") << std::endl;
    std::cout << r.reverseDigit(123) << std::endl;
    return 0;
}