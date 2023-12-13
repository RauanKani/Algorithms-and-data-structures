#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string path;
    getline(cin, path);

    stringstream ss(path);
    string part;

    while (getline(ss, part, '\\')) { 
        cout << part << endl; 
    }

    return 0;
}