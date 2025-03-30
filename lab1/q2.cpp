#include <iostream>

inline std::string toUpper(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    return str;
}

inline int vowelsCount(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    return count;
}

inline std::string reverse(std::string str) {
    std::string str2 = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        str2 += str[i];
    }
    return str2;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Convert to uppercase: " << toUpper(str) << std::endl;
    std::cout << "Vowels count: " << vowelsCount(str) << std::endl;
    std::cout << "Reversed: " << reverse(str) << std::endl;
    return 0;
}
