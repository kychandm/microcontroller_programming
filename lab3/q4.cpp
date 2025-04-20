#include <iostream>
using namespace std;

class Vehicle {
    protected:
        string brand;
        int year;
    public:
        Vehicle(string b, int y): brand(b), year(y) {}
        ~Vehicle() {}

        virtual void showInfo() {
            cout << "\nBrand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
        virtual void startEngine() {
            cout << "Starting engine of Vehicle" << endl;
        }
};

class Car: public Vehicle {
    private:
        int numDoors;
    public:
        Car(string b, int y, int doors): Vehicle(b, y), numDoors(doors) {};
        

        virtual void showInfo() override{
            Vehicle::showInfo();
            cout << "Number of doors: " << numDoors << endl;
        }
        virtual void startEngine() override {
            cout << "Car engine is starting!" << endl;
        }
};

class ElectricCar: public Car {
    private:
        int batteryCapacity;
    public:
        ElectricCar(): batteryCapacity(0), Car("Unknown", 0, 0) {}
        ElectricCar(string b, int y, int doors, int capacity): Car(b, y, doors), batteryCapacity(capacity) {}

        void showInfo() override {
            Car::showInfo();
            cout << "Battery capacity: " << batteryCapacity << " kWh" << endl;
        }
        void startEngine() override {
            cout <<  "Electric engine is starting... Silent but powerful!" << endl;
        }
};

int main() {
    Vehicle* v = new Vehicle("McLaren", 2022);
    v->showInfo();
    v->startEngine();

    Car* c = new Car("Toyota", 2021, 4);
    c->showInfo();
    c->startEngine();
    ElectricCar* ec = new ElectricCar("Lotus", 2023, 2, 100);
    ec->showInfo();
    ec->startEngine();

    ElectricCar* ecd = new ElectricCar();
    ecd->showInfo();
    ecd->startEngine();

    delete v;
    delete c;
    delete ec;
    delete ecd;

    return 0;
}
