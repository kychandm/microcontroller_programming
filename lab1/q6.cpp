#include <iostream>

int main(){
    int x;
    int sum = 0;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    // Print the digits from least significant to most significant, aka reversing the integer
    for(int i = 1; x/i != 0; i*=10){
        std::cout << x/i%10;
    }
    std::cout << std::endl;
}