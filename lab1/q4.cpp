#include <iostream>

#define SQUARE(x) (x * x)

int main() {
    int x;
    std::cout << "Enter an integer1: ";
    std::cin >> x;
    std::cout << SQUARE(x) << std::endl;
    return 0;
}
