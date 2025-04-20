#include <iostream>
using namespace std;

class Car {
    private: 
        string brand;
        int year;
    public:
        Car(string brand, int year): brand(brand), year(year){
            cout << "Car " << brand << " from " << year << " created." << endl;
        }
        ~Car(){
            cout << "Car " << brand << " destroyed." << endl;
        }

        void showInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main() {
    Car* car = new Car("Mercedes AMG", 2020);
    car->showInfo();
    delete car;
    return 0;
}