#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    bool available;

public:
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->available = true;
    }

    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    bool isAvailable() {
        return available;
    }

    void rentCar() {
        if (available) {
            available = false;
            cout << "Car rented successfully." << endl;
        } else {
            cout << "Car is already rented." << endl;
        }
    }

    void returnCar() {
        if (!available) {
            available = true;
            cout << "Car returned successfully." << endl;
        } else {
            cout << "Car is already available." << endl;
        }
    }
};

int main() {
    // Create car objects
    Car car1("Toyota", "Camry", 2021);
    Car car2("Honda", "Accord", 2020);
    Car car3("Ford", "Mustang", 2019);

    // Display car details
    cout << "Car 1: " << car1.getMake() << " " << car1.getModel() << " " << car1.getYear() << endl;
    cout << "Car 2: " << car2.getMake() << " " << car2.getModel() << " " << car2.getYear() << endl;
    cout << "Car 3: " << car3.getMake() << " " << car3.getModel() << " " << car3.getYear() << endl;

    // Rent and return cars
    car1.rentCar();
    car2.rentCar();
    car1.returnCar();
    car3.rentCar();

    return 0;
}
