#include <iostream> 
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b + sqrt(D)) / (2 * a);
        double x2 = (-b - sqrt(D)) / (2 * a);
        std::cout << x1 << " " << x2 << std::endl;
    }
    else if (D == 0) {
        double x = -b / (2 * a);
        std::cout << x << std::endl;
    }

    return 0;
}