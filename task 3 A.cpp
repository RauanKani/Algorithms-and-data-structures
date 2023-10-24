#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = (n * (n + 1) * (2 * n + 1)) / 6;

    std::cout << sum << std::endl;

    return 0;
}