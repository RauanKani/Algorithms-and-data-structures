#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < N; i += 2) {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

    return 0;
}