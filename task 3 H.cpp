#include <iostream>
#include <cmath>

int main() {
    int N;
    std::cin >> N;

    int result = pow(2, N + 1) - 1;

    std::cout << result << std::endl;

    return 0;
}