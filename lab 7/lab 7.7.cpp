#include <iostream>
#include <string>

using namespace std;

int countSubstrings(const string& str, const string& substr) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substr, pos)) != string::npos) {
        count++;
        pos += substr.length(); 
    }

    return count;
}

int main() {
    string str, substr;
    getline(cin, str); 
    getline(cin, substr); 

    cout << countSubstrings(str, substr) << endl; 

    return 0;
}