#include <iostream>
#include <string>

using namespace std;

void replaceAll(string& str, const string& from, const string& to) {
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); 
    }
}

int main() {
    string str, from, to;
    getline(cin, str); 
    getline(cin, from); 
    getline(cin, to); 

    replaceAll(str, from, to); 

    cout << str << endl;

    return 0;
}