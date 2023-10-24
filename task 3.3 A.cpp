#include <iostream>

int SumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10; 
        sum += digit; 
        n /= 10; 
    }

    return sum;
}

int main() {
    int N;
    std::cin >> N;

    int result = SumOfDigits(N);

    std::cout << result << std::endl;

    return 0;
}