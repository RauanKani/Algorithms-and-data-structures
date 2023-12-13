#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    stringstream ss(input);
    string word;
    int wordCount = 0;

    while (ss >> word) { 
        wordCount++; 
    }

    cout << wordCount << endl; 

    return 0;
}