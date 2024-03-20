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

int main() {

    std::cout << sum_of_powers(3);
    return 0;
}