#include <iostream>
#include "Unit.h"

int main() {
    Unit troll("Troll", 200, 50);
    Unit witcher("Witcher", 150, 100);
    
    std::cout << troll << std::endl;
    std::cout << witcher << std::endl;
    
    troll.attack(witcher);
    
    std::cout << troll << std::endl;
    std::cout << witcher << std::endl;
    
    witcher.attack(troll);
    
    std::cout << troll << std::endl;
    std::cout << witcher << std::endl;
    
    troll.attack(witcher);
    
    std::cout << troll << std::endl;
    std::cout << witcher << std::endl;
    
    witcher.addHitPoints(-30);
    
    std::cout << troll << std::endl;
    std::cout << witcher << std::endl;
    
    witcher.attack(troll);
    
    return 0;
}