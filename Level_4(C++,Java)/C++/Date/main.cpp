#include <iostream>
#include "Date.h"

int main() {
    int day, month, year;
    bool isDate = false;
    
    for ( ; !isDate; ) {
        try{
            std::cin >> day;
            std::cin >> month;
            std::cin >> year;
            
            Date date(day, month, year);
            
            isDate = true;
            
            std::cout << date << std::endl;
        } catch (InvalidDate exc) {
            std::cout << exc.text << std::endl;
        }
    }
    
    std::cout << "Well done!!!" << std::endl;
    
    return 0;
}
