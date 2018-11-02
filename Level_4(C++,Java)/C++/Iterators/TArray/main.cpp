#include <iostream>
#include "TArrayIterator.cpp"

int main() {
    // int array[] = { 1, 2, 3, 4, 5 };
    // int size = sizeof(array)/sizeof(int);
    // TArrayIterator<int> it(array, size);
    
    // double array[] = { 0.5, 3.7, 8.3, 6.2, 10.1, 99.2, 5.5, 33.1, 44.3 };
    // int size = sizeof(array)/sizeof(double);
    // TArrayIterator<double> it(array, size);
    
    char text[] = "Hello, World! Good bye!";
    int size = sizeof(text)/sizeof(char) - 1;
    TArrayIterator<char> it(text, size);
    
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
    
    std::cout << it[3] << std::endl;
    std::cout << *it << std::endl;
    
    it.reset();
    
    std::cout << *it << std::endl;
    
    it++;
    it++;
    it++;
    it--;
    // it--;
    // it--;
    
    std::cout << *it << std::endl;
    
    it.move(4);
    
    std::cout << *it << std::endl;
    
    return 0;
}
