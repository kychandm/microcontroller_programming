#include <iostream>

//namespace for math operations
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

//namespace for text operations
namespace TextOperations {
    std::string concat(std::string a, std::string b) {
        return a + b;
    }
}

int main() {
    std::cout << MathOperations::add(1, 2) << std::endl;
    std::cout << TextOperations::concat("Hello", " World!") << std::endl;
    return 0;
}