#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word, lastWord;

    while (ss >> word) { 
        lastWord = word; 
    }

    cout << lastWord << endl; 

    return 0;
}