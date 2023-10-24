#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int result = (n % m == 0) || (m % n == 0);
    std::cout << result << std::endl;

    return 0;
}