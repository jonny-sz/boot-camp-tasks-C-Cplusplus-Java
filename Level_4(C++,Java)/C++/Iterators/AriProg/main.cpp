#include <iostream>
#include "AriProgIterator.h"

int main() {
    AriProgIterator it(1, 4, 10);
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    for ( ; !it.begin(); it-- ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    it.move(5);
    
    std::cout << *it << std::endl;
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    it.move(2);
    
    std::cout << *it << std::endl;
    
    for ( ; !it.begin(); it-- ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    it.move(9);
    
    std::cout << *it << std::endl;
    
    it.reset();
    
    std::cout << *it << std::endl;
    
    it.move(2);
    
    it++;
    it++;
    it++;
    it--;
    // it--;
    // it--;
    
    std::cout << *it << std::endl;
    
    return 0;
}
