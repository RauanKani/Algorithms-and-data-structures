#include <iostream>
#include <cctype> 

int countDigits(const std::string& str, int index) {
    if (index == str.length()) {
        return 0;
    }

    int currentDigitCount = isdigit(str[index]) ? 1 : 0;

    return currentDigitCount + countDigits(str, index + 1);
}

int main() {
    std::string input;
    std::cin >> input;

    int result = countDigits(input, 0);

    std::cout << result << std::endl;

    return 0;
}
