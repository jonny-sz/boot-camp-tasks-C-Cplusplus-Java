#include "Pen.h"

Pen::Pen(int inkCapacity) : inkCapacity(inkCapacity), inkAmount(inkCapacity) {}

Pen::~Pen() {}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    int tmp = paper.getSymbols();
    int symbolsWrited;
    int inkNeeded;
    int gaps = 0;
    
    if ( this->inkAmount == 0 ) {
        throw OutOfInk();
    }
    
    paper.addContent(message.substr(0, this->inkAmount));
    
    symbolsWrited = paper.getSymbols() - tmp ;
    
    for ( int i = 0; i < symbolsWrited; i++ ) {
        if ( message[i] == ' ' || message[i] == '\n' ) {
            gaps += 1;
        }
    }
    
    inkNeeded = symbolsWrited - gaps;
    this->inkAmount -= inkNeeded;
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}
