#include <iostream>

void PrintBinaryReverse(int n) {
    while (n > 0) {
        int bit = n % 2; 
        std::cout << bit; 
        n /= 2; 
    }
}

int main() {
    int N;
    std::cin >> N;

    PrintBinaryReverse(N);

    std::cout << std::endl;

    return 0;
}