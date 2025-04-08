#include <iostream>

int main() {
    int x = 100;
    int* ptr1 = &x;
    int* ptr2 = ptr1;

    // Changing the value of x using ptr1
    *ptr1 = 200;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Value pointed by ptr1: " << *ptr1 << std::endl;
    std::cout << "Value pointed by ptr2: " << *ptr2 << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Address pointed by ptr1: " << ptr1 << std::endl;
    std::cout << "Address pointed by ptr2: " << ptr2 << std::endl;
}