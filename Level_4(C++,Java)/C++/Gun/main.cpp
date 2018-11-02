#include <iostream>
#include "Gun.h"

int main() {
    Gun colt("Colt", 7);
    
    std::cout << colt << std::endl;
    
    colt.reload();
    
    std::cout << colt << std::endl;
    
    colt.prepare();
    
    std::cout << colt << std::endl;
    
    colt.shoot();
    
    std::cout << colt << std::endl;
    
    for ( int i = 0; i < 20; i++ ) {
        if ( colt.getAmount() == 0 ) {
            colt.reload();
            std::cout << colt << std::endl;
            colt.prepare();
            std::cout << colt << std::endl;
        }
        colt.shoot(); 
        std::cout << colt << std::endl;
    }
    
    return 0;
}
