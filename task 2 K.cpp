#include <iostream>
#include <cmath>

int main() {
    int row_kon, col_kon, row_figura, col_figura;
    std::cin >> row_kon >> col_kon >> row_figura >> col_figura;

    int row_diff = abs(row_kon - row_figura);
    int col_diff = abs(col_kon - col_figura);

    if ((row_diff == 1 && col_diff == 2) || (row_diff == 2 && col_diff == 1)) {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}