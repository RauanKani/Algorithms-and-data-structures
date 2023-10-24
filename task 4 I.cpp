#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);

    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    int last_element = arr[N - 1];
    for (int i = N - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last_element;
    for (int i = 0; i < N; ++i) {
        std::cout << arr[i];
        if (i < N - 1) {
            std::cout << ' ';
        }
    }

    std::cout << std::endl;

    return 0;
}