#include <iostream>

class Car {
    private:
        std::string model;
        int year;
        int price;
    public:
        Car(std::string m = "Unknown", int y = 0, int p = 0) : model(m), year(y), price(p) {}
        ~Car() {
            std::cout << model << std::endl;
        }
        void inputBasic(){
            std::cout << "Enter model: ";
            std::getline(std::cin >> std::ws, model);
            std::cout << "Enter year: ";
            std::cin >> year;
            std::cout << "Enter price: ";
            std::cin >> price;
        }
        void displayBasic() const {
            std::cout << "Model: " << model << ", Year: " << year << ", Price: $" << price;
        }
};

class ElectricCar : public Car {
    private:
        int batterySize;
    public:
        ElectricCar(std::string m = "Unknown", int y = 0, int p = 0, int b = 0) : Car(m, y, p), batterySize(b) {}
        ~ElectricCar() {
            std::cout << "Destroying Electric Car: ";
        }
        void input(){
            Car::inputBasic();
            std::cout << "Enter battery size (kwh): ";
            std::cin >> batterySize;
        }
        void display() const {
            Car::displayBasic();
            std::cout << ", Battery: " << batterySize << " kwh" <<  std::endl;
        }
};

class GasCar : public Car {
    private:
        int fuelCapacity;
    public:
        GasCar(std::string m = "Unknown", int y = 0, int p = 0, int f = 0) : Car(m, y, p), fuelCapacity(f) {}
        ~GasCar() {
            std::cout << "Destroying Gas Car: ";
        }
        void input(){
            Car::inputBasic();
            std::cout << "Enter fuel capacity (L): ";
            std::cin >> fuelCapacity;
        }
        void display() const {
            Car::displayBasic();
            std::cout << ", Fuel: " << fuelCapacity << "  L" << std::endl;
        }
};

class HybridCar : public Car {
    private:
        int batterySize;
        int fuelCapacity;
    public:
        HybridCar(std::string m = "Unknown", int y = 0, int p = 0, int b = 0, int f = 0) : Car(m, y, p), batterySize(b), fuelCapacity(f) {}
        ~HybridCar() {
            std::cout << "Destroying Hybrid Car: ";
        }
        void input(){
            Car::inputBasic();
            std::cout << "Enter battery size (kwh): ";
            std::cin >> batterySize;
            std::cout << "Enter fuel capacity (L): ";
            std::cin >> fuelCapacity;
        }
        void display() const {
            Car::displayBasic();
            std::cout << ", Battery: " << batterySize << " kwh, Fuel: " << fuelCapacity << " L" << std::endl;
        }
};

int main(){
    int size;
    std::cout << "Enter total number of cars: ";
    std::cin >> size;

    Car** fleet = new Car*[size];
    int types[size];

    for(int i = 0; i < size; ++i){
        int type;
        std::cout << "\nCar " << i + 1 << " type:\n[1] Electric\n[2] Gas\n[3] Hybrid\n";
        std::cout << "Enter choice: ";
        std::cin >> type;
        types[i] = type;
        Car* car = nullptr;

        switch(type){
            case 1:
                car = new ElectricCar();
                static_cast<ElectricCar*>(car)->input();
                fleet[i] = car;
                break;
            case 2:
                car = new GasCar();
                static_cast<GasCar*>(car)->input();
                fleet[i] = car;
                break;
            case 3:
                car = new HybridCar();
                static_cast<HybridCar*>(car)->input();
                fleet[i] = car;
                break;
            default:
                std::cout << "Invalid choice. Exiting...\n";
                return 1;
        }
    }

    std::cout << "\n--- Fleet Information ---\n";
    for(int i = 0; i < size; ++i){
        switch (types[i]){
        case 1:
            static_cast<ElectricCar*>(fleet[i])->display();
            break;
        
        case 2:
            static_cast<GasCar*>(fleet[i])->display();
            break;
        
        case 3:
            static_cast<HybridCar*>(fleet[i])->display();
            break;
        default:
            std::cout << "Invalid choice. Exiting...\n";
            return 1;
        }
    }
    std::cout << "\n--- Cleaning up fleet ---\n";
    for(int i = 0; i < size; ++i){
        switch (types[i]){
        case 1:
            delete static_cast<ElectricCar*>(fleet[i]);
            break;
        case 2:
            delete static_cast<GasCar*>(fleet[i]);
            break;
        case 3:
            delete static_cast<HybridCar*>(fleet[i]);
            break;
        default:
            std::cout << "Invalid choice. Exiting...\n";
            return 1;
        }
    }
    delete[] fleet;
}