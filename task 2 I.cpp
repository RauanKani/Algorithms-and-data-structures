#include <iostream>
#include <cmath>

int main() {
    int row_ferz, col_ferz, row_figura, col_figura;
    std::cin >> row_ferz >> col_ferz >> row_figura >> col_figura;

    if (row_ferz == row_figura || col_ferz == col_figura || std::abs(row_ferz - row_figura) == std::abs(col_ferz - col_figura)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}