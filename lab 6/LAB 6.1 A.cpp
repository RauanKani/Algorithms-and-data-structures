#include <iostream>

int min(int a, int b, int c, int d) {
    int min_val = a;
    if (b < min_val) {
        min_val = b;
    }
    if (c < min_val) {
        min_val = c;
    }
    if (d < min_val) {
        min_val = d;
    }
    return min_val;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int result = min(a, b, c, d);

    std::cout << result << std::endl;

    return 0;
}
