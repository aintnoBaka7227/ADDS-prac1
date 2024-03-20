#include "BagOfHolding.h"
#include <iostream>

int main () {

    BagOfHolding demo;
    demo.addItem("fish");
    demo.addItem("chicken");
    demo.listItem();
    demo.removeItem("fish");
    demo.removeItem("soup");
    demo.listItem();
    return 0;
}