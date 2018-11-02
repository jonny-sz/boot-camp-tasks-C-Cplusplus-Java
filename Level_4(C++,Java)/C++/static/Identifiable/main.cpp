#include <iostream>
#include "Identifiable.h"

int main() {
    Identifiable a;
    Identifiable b;
    Identifiable c;
    Identifiable* d = new Identifiable();
    Identifiable e;
    e = b;
    
    std::cout << "a (id): " << a.getId() << '\n';
    std::cout << "b (id): " << b.getId() << '\n';
    std::cout << "c (id): " << c.getId() << '\n';
    std::cout << "d (id): " << d->getId() << '\n';
    std::cout << "e (id): " << e.getId() << std::endl;
    
    delete d;
        
    return 0;
}
