#include "Truckloads.h"
#include <cmath>

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= loadSize) {
        return 1;
    }
    else {
        int split1 = ceil(numCrates/2);
        int split2 = floor(numCrates/2);
        return (split1,loadSize)+(split2,loadSize);
    }
}