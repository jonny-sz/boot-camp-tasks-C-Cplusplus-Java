#include <iostream>
#include "Mohican.h"

int main() {
    // std::cout << Mohican::getLastMohican() << std::endl;
    
    // Mohican johny("Johny");
    
    // std::cout << Mohican::getLastMohican() << std::endl;
    
    // Mohican jessica("Jessica");
    // Mohican alexandr("Alexandr");
    Mohican* david = new Mohican("David");
    Mohican* bruce = new Mohican("bruce");
    Mohican* katty = new Mohican("katty");
    Mohican katty2 = Mohican(*katty);
    
    std::cout << Mohican::getLastMohican() << std::endl;
    
    delete bruce;
    delete katty;
    delete david;
    
    
    
    return 0;
}
