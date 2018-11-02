#include <iostream>
#include "Pen.h"

int main() {
    Paper paper(15);
    Pen pen(20);
    
    pen.write(paper, "Hi!");
    
    paper.show();
    
    std::cout << "Pen ink[" << pen.getInkAmount() << '/' << pen.getInkCapacity() << ']' << std::endl;
    
    std::cout << std::endl;
    
    pen.write(paper, " Hi");
    
    paper.show();
    
    std::cout << "Pen ink[" << pen.getInkAmount() << '/' << pen.getInkCapacity() << ']' << std::endl;
    
    std::cout << std::endl;
    
    pen.write(paper, " Hi");
    
    paper.show();
    
    std::cout << "Pen ink[" << pen.getInkAmount() << '/' << pen.getInkCapacity() << ']' << std::endl;
    
    std::cout << std::endl;
    
    pen.write(paper, " good  bye and goodbye");
    
    // paper.addContent("Programs shown in the previous chapter is rather questionable.");
    // paper.show();
    
    // paper.addContent("\nWe had to write several lines of code, compile hem, and then execute the resulting program.");
    // paper.show();
    
    // paper.addContent("It certainly would have been much faster to type the output sentence ourselves.");
    
    paper.show();
    
    std::cout << "Pen ink[" << pen.getInkAmount() << '/' << pen.getInkCapacity() << ']' << std::endl;
    
    // pen.refill();
    
    // std::cout << "Pen ink[" << pen.getInkAmount() << '/' << pen.getInkCapacity() << ']' << std::endl;
    
    return 0;
}