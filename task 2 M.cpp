#include <iostream>

int main() {
    int k;
    std::cin >> k;

    if (k % 2 == 0) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}