#include <iostream>

int main(){
    int x;
    int sum = 0;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    for(int i = 1; x/i != 0; i*=10){
        // Sum the digits
        sum += x/i%10;
    }
    std::cout << sum << std::endl;
}