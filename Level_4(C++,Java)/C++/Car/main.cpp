#include <iostream>
#include "Car.h"

int main() {
    Car car;
    Point berlin(5, 7);
    Point london(8, 10);
    Point pekin(-5, -3);
    
    std::cout << "I have a new car!!! Yeeeeeeees!" << std::endl;
    std::cout << car << std::endl;
    std::cout << "GO to Berlin!" << std::endl;
    
    car.drive(berlin);
    
    std::cout << car << std::endl;
    std::cout << "GO to London!" << std::endl;
    
    car.drive(london);
    
    std::cout << car << std::endl;
    std::cout << "Fuck!!! Out of fuel!" << std::endl;
    
    car.refill(50);
    
    std::cout << "But I find a fuel!!!" << std::endl;
    std::cout << car << std::endl;
    std::cout << "GO to Pekin!" << std::endl;
    
    car.drive(-10, -12);
    car.drive(berlin);
    
    std::cout << car << std::endl;
    std::cout << "YouooHoo! I cool traveler!!!" << std::endl;
    
    return 0;
}
