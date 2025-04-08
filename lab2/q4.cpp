#include <iostream>

int main() {
    while(1){
        std::cout << "Enter a number: " << std::endl;
        int input;
        std::cin >> input;

        if (input < 0) {
            std::cout << "Exiting..." << std::endl;
            break;
        }
        if (input == 0) {
            std::cout << "Continue..." << std::endl;
            continue;
        }
        std::cout << "Squared: " << input*input << std::endl;
    }
    return 0;
}