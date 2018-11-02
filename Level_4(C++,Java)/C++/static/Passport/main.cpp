#include <iostream>
#include "Passport.h"

int main() {
    Passport pass1("Backham", "David", Date());
    
    Passport::setSeries("BB", 999999);
    
    Passport pass2("Lee", "Bruce", Date(15,11,1973));
    Passport pass3("Martin", "William", Date(3,4,2005));
    Passport pass4 = pass1;
    
    std::cout << pass1 << std::endl;
    std::cout << pass2 << std::endl;
    std::cout << pass3 << std::endl;
    std::cout << pass4 << std::endl;
    
    return 0;
}
