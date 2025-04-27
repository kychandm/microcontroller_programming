#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    
    cout << "Enter your full name: ";
    getline(cin, name); // This will be skipped!
    
    cout << "Age: " << age << ", Name: " << name << endl;
}