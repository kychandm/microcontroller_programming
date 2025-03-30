#include <iostream>

#define MIN_LENGTH 8



int main(){
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    bool hasMinLength = false;
    bool hasLower = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;


    if (str.length() >= MIN_LENGTH) {
        hasMinLength = true;
    }
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            hasLower = true;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            hasUpper = true;
        } else if (str[i] >= '0' && str[i] <= '9') {
            hasDigit = true;
        } else if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*') {
            hasSpecial = true;
        }
    }

    if(hasMinLength && hasLower && hasUpper && hasDigit && hasSpecial){
        std::cout << "Strong password" << std::endl;
    } else {
        std::cout << "Weak password" << std::endl;
        if(!hasMinLength){
            std::cout << "Password must be at least " << MIN_LENGTH << " characters long" << std::endl;
        }
        if(!hasLower){
            std::cout << "Password must contain at least one lowercase letter" << std::endl;
        }
        if(!hasUpper){
            std::cout << "Password must contain at least one uppercase letter" << std::endl;
        }
        if(!hasDigit){
            std::cout << "Password must contain at least one digit" << std::endl;
        }
        if(!hasSpecial){
            std::cout << "Password must contain at least one special character" << std::endl;
        }
    }
}