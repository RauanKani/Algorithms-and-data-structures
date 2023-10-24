#include <iostream>

int main() {
    int rookX, rookY, targetX, targetY;
    std::cin >> rookX >> rookY >> targetX >> targetY;

    if (rookX == targetX || rookY == targetY) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}