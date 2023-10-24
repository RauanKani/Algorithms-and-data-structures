#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    for (int i = 1; i < N; i += 2) {
        std::swap(arr[i], arr[i - 1]);
    }

    for (int i = 0; i < N; ++i) {
        std::cout << arr[i];
        if (i < N - 1) {
            std::cout << ' ';
        }
    }

    std::cout << std::endl;

    return 0;
}