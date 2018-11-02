#include <iostream>
#include "FactorialIterator.h"

int main() {
    FactorialIterator it(15);
    
   for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    for ( ; !it.begin(); it-- ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    std::cout << *it << std::endl;
    
    it.reset();
    
    it++;
    it++;
    it++;
    it--;
    // it--;
    // it--;
    
    std::cout << *it << std::endl;
    
    return 0;
}
