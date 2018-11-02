#include <iostream>
#include "Countable.h"

int main() {
    Countable a;
    Countable b;
    Countable c;
    Countable d;
    Countable* e = new Countable();
    Countable f = Countable(*e);
    
    std::cout << Countable::total << std::endl;
    
    delete e;
    
    std::cout << Countable::total << std::endl;
    
    return 0;
}
