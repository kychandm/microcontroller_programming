#include <iostream>


int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

double multiply(int a, double b, bool flag) {
    if(!flag) {
        return a * b;
    } else {
        return static_cast<int>(a * b);
    }
}

int main() {
    int a = 5, b = 10;
    double x = 5.5, y = 10.5;

    std::cout << "Multiplication of integers: " << multiply(a, b) << std::endl;
    std::cout << "Multiplication of doubles: " << multiply(x, y) << std::endl;
    std::cout << "Multiplication of int and double with flag false: " << multiply(a, x, false) << std::endl;
    std::cout << "Multiplication of int and double with flag true: " << multiply(a, x, true) << std::endl;

    return 0;
}