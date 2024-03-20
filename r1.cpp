#include <cmath>
#include <iostream>

int sum_of_powers(int n) {
    if (n<=1) {
        return 1;
    }
    else {
        int sum = 0;
        sum = sum + pow(n, n);
        return sum + sum_of_powers(n-1);
    }
}
