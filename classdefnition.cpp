#include<iostream>
using namespace std;

class Car {
private:
    int car_number;
    char car_model[10]; // Use string if car model names can be longer
public:
    void getdata();
    void showdata();
};

void Car::getdata() {
    cout << "Enter car number: ";
    cin >> car_number;
    cout << "\nEnter car model: ";
    cin >> car_model;
}

void Car::showdata() {
    cout << "Car Number is " << car_number;
    cout << "\nCar model is " << car_model;
}

int main() {
    Car c1;
    c1.getdata();
    c1.showdata();
    return 0;
}