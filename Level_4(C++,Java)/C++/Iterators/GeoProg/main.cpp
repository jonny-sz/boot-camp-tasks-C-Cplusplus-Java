#include <iostream>
#include "GeoProgIterator.h"

int main() {
    GeoProgIterator it(1, 2, 5);
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    std::cout << *it << std::endl;
    
    std::cout << std::endl;
    
    for ( ; !it.begin(); it-- ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    std::cout << *it << std::endl;
    
    std::cout << std::endl;
    
    it.reset();
    
    it++;
    std::cout << *it << std::endl;
    
    it++;
    std::cout << *it << std::endl;
    
    it++;
    std::cout << *it << std::endl;
    
    it--;
    // it--;
    // it--;
    
    std::cout << *it << std::endl;
    
    return 0;
}
