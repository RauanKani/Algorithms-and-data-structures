#include <iostream>
using namespace std;

int main() {
    int v, t;
    cin >> v >> t;
    int position = 0;
    if (v > 0) {
        position = (position + v * t) % 109;
    }
    else {
        position = (position + (109 + v * t)) % 109;
    }
    cout << position << endl;

    return 0;
}