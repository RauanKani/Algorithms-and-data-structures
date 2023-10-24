#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int prev, current;
    int count = 0;

    std::cin >> prev; 

    for (int i = 1; i < N; ++i) { 
        std::cin >> current;
        if (current > prev) {
            count++;
        }
        prev = current;
    }

    std::cout << count << std::endl;

    return 0;
}