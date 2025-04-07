#include <iostream>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside swap function: a = " << a << ", b = " << b << std::endl;
}

void swapUsingPointers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapUsingReferences(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    
    // Using function return
    swap(x, y);
    std::cout << "After swap using return: x = " << x << ", y = " << y << std::endl;

    // Using pointers
    x = 5; // Reset x
    y = 10; // Reset y
    swapUsingPointers(&x, &y);
    std::cout << "After swap using pointers: x = " << x << ", y = " << y << std::endl;

    // Using references
    x = 5;
    y = 10;
    swapUsingReferences(x, y);
    std::cout << "After swap using references: x = " << x << ", y = " << y << std::endl;

    return 0;
}

// using pointer and reference could be used to swap the values of two variables
// not using pointer and reference will not swap the values of two variables as C++ can only return one variable for a function

// the best practice is to use reference as it is more readable and less error-prone