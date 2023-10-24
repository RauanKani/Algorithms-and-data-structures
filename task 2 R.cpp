#include <iostream>

int main() {
    int k, m, n;
    std::cin >> k >> m >> n;

    int time = ((n * 2 * m) + k - 1) / k;
    std::cout << time << std::endl;

    return 0;
}