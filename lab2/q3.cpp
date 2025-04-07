#include <iostream>

int main() {
    float input1, input2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> input1 >> input2;
    std::cout << "Enter an operator (+, -, *, /): ";
    char op;
    std::cin >> op;
    float result;
    switch (op) {
        case '+':
            result = input1 + input2;
            break;
        case '-':
            result = input1 - input2;
            break;
        case '*':
            result = input1 * input2;
            break;
        case '/':
            if (input2 != 0) {
                result = input1 / input2;
            } else {
                std::cout << "Error: Division by zero" << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Error: Invalid operator" << std::endl;
            return 1;
    }
    std::cout << "Result: " << result << std::endl;
    return 0;
}