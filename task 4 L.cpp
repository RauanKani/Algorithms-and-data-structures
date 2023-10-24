#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> heights(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> heights[i];
    }

    int petya_height;
    std::cin >> petya_height;

    int position = 1;
    while (position <= n && heights[position - 1] > petya_height) {
        position++;
    }

    std::cout << position << std::endl;

    return 0;
}