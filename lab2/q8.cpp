#include <iostream>

int main() {
    int a = 100;
    int& refA = a;
    refA = 30;
    std::cout << "Value of a: " << a << std::endl; 
    std::cout << "Value of refA: " << refA << std::endl;
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Address of refA: " << &refA << std::endl;
}