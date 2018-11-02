#include "Paper.h"

Paper::Paper(int maxSymbols) : maxSymbols(maxSymbols), symbols(0) {}

Paper::~Paper() {}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}

int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int freeSpace = this->maxSymbols - this->symbols;
    
    if ( this->symbols == this->maxSymbols ) {
        throw OutOfSpace();
    }
    
    this->content += message.substr(0, freeSpace);
    
    this->symbols = this->content.size();
}

void Paper::show() const {
    std::cout << "(" << this->symbols << '/' << this->maxSymbols << ')' 
              << "  Text: " << '[' << this->content << ']' << std::endl;
}
