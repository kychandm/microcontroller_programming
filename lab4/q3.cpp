#include <iostream>

class Car{
    private:
        std::string model;
        int year;
        int price;
    public:
        // Constructor
        Car(std::string m = "Unknown", int y = 0, int p = 0) : model(m), year(y), price(p) {
            std::cout << "Car Constructor: " << model << " (" << year <<") - $" << price << "\n";
        }
        // Destructor
        ~Car() {
            std::cout << "Car Destructor: " << model << " destroyed\n";
        }
        // Method to display car info
        void display() const {
            std::cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << std::endl;
        }
};

class CarCollection {
    private:
        Car** cars;
        int size;
    public:
        // Constructor: dynamically create array and initialize it
        CarCollection() {
            std::cout << "How many cars do you want to enter? ";
            std::cin >> size;

            std::string models[size] = {"0"};
            int years[size] = {0};
            int prices[size] = {0};

            for (int i = 0; i < size; ++i) {
                std::cout << "\nEnter model for car " << i + 1 << ": ";
                std::getline(std::cin >> std::ws, models[i]);
                std::cout << "Enter year " << ": ";
                std::cin >> years[i];
                std::cout << "Enter price " << ": ";
                std::cin >> prices[i];

                std::cout << "\n";
            }

            cars = new Car*[size];
            for (int i = 0; i < size; ++i) {
                cars[i] = new Car(models[i], years[i], prices[i]);
            }
            

            std::cout << "CarCollection initialized with " << size << " cars\n";
        }

        ~CarCollection() {
            for (int i = size; i >= 0; --i) {
                delete cars[i];
            }
            delete[] cars;
            std::cout << "CarCollection destroyed\n";
        }
        void displayCars() const {
            std::cout << "\n--- Car Collection ---\n";
            for (int i = 0; i < size; ++i) {
                cars[i]->display();
            }
            std::cout << std::endl;
        }
};

int main() {
    CarCollection* collection = new CarCollection(); // created on heap
    collection->displayCars();

    delete collection; // cleanup
    return 0;
}