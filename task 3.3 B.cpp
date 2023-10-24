#include <iostream>

int NumberOfZeroes(int n) {
    int count = 0;

    while (n > 0) {
        int digit = n % 10; 
        if (digit == 0) {
            count++; 
        }
        n /= 10; 
    }

    return count;
}

int main() {
    int N;
    std::cin >> N;

    int result = NumberOfZeroes(N);

    std::cout << result << std::endl;

    return 0;
}