#include <iostream>

double power(double a, int n) {
    double result = 1.0;

    if (n >= 0) {
        for (int i = 0; i < n; ++i) {
            result *= a;
        }
    }
    else {
        for (int i = 0; i > n; --i) {
            result /= a;
        }
    }

    return result;
}

int main() {
    double a;
    int n;
    std::cin >> a >> n;

    double result = power(a, n);

    std::cout << result << std::endl;

    return 0;
}
