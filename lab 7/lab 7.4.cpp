#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;

    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());

    if (word == reversedWord) { 
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}