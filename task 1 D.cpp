#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int remaining_apples = K % N;
    cout << remaining_apples << endl;

    return 0;
}