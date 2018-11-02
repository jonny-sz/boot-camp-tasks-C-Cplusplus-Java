#include <iostream>
#include <cstdlib>
#include "List.h"

int main() {
    List list1;
    List list2;
    
    // for ( int i = 0; i < 100; i++ ) {
    //     list1.push_back(i);
    // }
    
    for ( int i = 0; i < 100; i++ ) {
        list2.push_back(i);
    }
    
    // std::cout << "List1" << list1;
    std::cout << "List2" << list2 << std::endl;
    
    // list2.erase(129);
    
    // std::cout << "List1" << list1;
    // std::cout << "List2" << list2;
    
    for ( int i = 260; i > 150; i-- ) {
        list2.push_back(i);
    }
    
    // std::cout << "List1" << list1;
    std::cout << "List2" << list2 << std::endl;
    
    // for ( int i = 0; i < 200; i++ ) {
    //     list2.pop_back();
    // }
    
    list2.sort();
    
    // std::cout << "List1" << list1;
    std::cout << "List2" << list2 << std::endl;
    
    std::cout << "Index of 250 = " << list2.find(250) << std::endl;
    std::cout << "Index of 33 = " << list2.find(33) << std::endl;
    
    list2.insert(-5, -5);
    
    std::cout << "List2" << list2 << std::endl;
    
    // if ( list1 == list2 ) {
    //    std::cout << "list1 is equal to list2" << std::endl;
    // }
    
    // if ( list1 != list2 ) {
    //    std::cout << "list1 is not equal to list2" << std::endl;
    // }
    
    return 0;
}