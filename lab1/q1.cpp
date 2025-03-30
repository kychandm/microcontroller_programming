#include <iostream>

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

namespace TextOperations {
    std::string add(std::string a, std::string b) {
        return a + b;
    }
}

int main() {
    std::cout << MathOperations::add(1, 2) << std::endl;
    std::cout << TextOperations::add("Hello", " World!") << std::endl;
    return 0;
}