#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
    this->fuelAmount = 10;
}

Car::~Car() {}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeeded = this->location.distance(destination) * this->fuelConsumption;
    
    if ( fuelNeeded > fuelAmount ) {
        throw OutOfFuel();
    }
    
    this->location = destination;
    this->fuelAmount -= fuelNeeded;
}

void Car::drive(double x, double y) {
    Point point(x, y);
    
    this->drive(point);
}

void Car::refill(double fuel) {
    this->fuelAmount += fuel;
    
    if ( this->fuelAmount > this->fuelCapacity ) {
        throw ToMuchFuel();
    }
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "--------------------------------------\n";
    out << "      Model: " << car.getModel() << "\n";
    out << "       Fuel: " << '(' << car.getFuelAmount() << '/' << car.getFuelCapacity() << ")\n";
    out << "Сonsumption: " << car.getFuelConsumption() << "\n";
    out << "   Location: " << car.getLocation() << "\n";
    out << "--------------------------------------";
}
