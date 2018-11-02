#include <iostream>
#include "TFileIterator.cpp"

int main() {
    TFileIterator<char> it("task.in");
    
    for ( ; !it.end(); it++ ) {
        std::cout << ' ' << *it;
    }
    
    std::cout << std::endl;
    
    return 0;
}
