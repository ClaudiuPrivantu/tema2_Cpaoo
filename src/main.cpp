#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Boat.h"

using namespace MyVehicles;

int main() {
    MyVehicles::Vehicle motor1("bmw", 2023, "este motor");
    MyVehicles::Car car1("mercedes", 2001, "este masina", 4);
    MyVehicles::Boat boat1("lambo", 1998, "este barca", 3);

    cout << "Vehicles details:\n";
    motor1.toString();
    car1.toString();
    boat1.toString();
    cout << "\n";

    cout << "Test copy-constructor: ";
    MyVehicles::Car car2 = car1;
    cout << "Car1:\n";
    car1.toString();
    cout << "Car2:\n";
    car2.toString();
    cout << "\n";
    cout << "Test independenta copy-constructor:\n";
    car1.changeInfo("masina de lux");
    car2.setBrand("audi");
    cout << "Car1:\n";
    car1.toString();
    cout << "Car2:\n";
    car2.toString();
    cout << "\n";

    cout << "Test move-constructor: ";
    MyVehicles::Boat boat2(std::move(boat1));
    cout << "Boat1 - obiectul sursa:\n";
    cout<<"Brand: "<<boat1.getBrand() << "\n";
    boat1.toString();
    cout << "Boat2 - obiectul destinatie:\n";
    boat2.toString();
    cout << "\n";
    cout << "Test independenta move-constructor:\n";
    boat1.setBrand("lambo"); //ii dam inapoi numele initial pentru lizibilitate
    boat1.changeInfo("barca de lux");
    boat2.setBrand("yachtyng");
    cout << "Boat1:\n";
    boat1.toString();
    cout << "Boat2:\n";
    boat2.toString();
    cout << "\n";

    cout << "Test assignment operator: ";
    MyVehicles::Vehicle motor2;
    cout << "Vehicle2:\n";
    motor2.toString();
    motor2 = motor1;
    cout << "\n";
    cout << "Vehicle1:\n";
    motor1.toString();
    cout << "Vehicle2:\n";
    motor2.toString();
    cout << "\n";

    return 0;
}
