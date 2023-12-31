﻿#include <iostream>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    if (is_prime(n)) {
        std::cout << "prime" << std::endl;
    }
    else {
        std::cout << "composite" << std::endl;
    }

    return 0;
}
