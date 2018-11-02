#include "AriProgIterator.h"

AriProgIterator::AriProgIterator(int first, int step, int limit) {
    this->first = first;
    this->step = step;
    this->limit = limit;
    this->currentValue = first;
    this->currentIndex = 1;
}

AriProgIterator::~AriProgIterator() {}

int AriProgIterator::value() const {
    return this->currentValue;
}

bool AriProgIterator::end() const {
    return this->currentIndex > this->limit;
}

bool AriProgIterator::begin() const {
    return this->currentIndex < 1;
}

void AriProgIterator::next() {
    if ( this->end() ) {
        return;
    }
    if ( this->begin() ) {
        this->currentIndex += 1;
    }
    
    this->currentIndex += 1;
    
    if ( this->end() ) {
        return;
    } else {
        this->currentValue += this->step;
    }
}

void AriProgIterator::prev() {
    if ( this->begin() ) {
        return;
    }
    if ( this->end() ) {
        this->currentIndex -= 1;
    }
    
    this->currentIndex -= 1;
    
    if ( this->begin() ) {
        return;
    } else {
        this->currentValue -= this->step;
    }
}

void AriProgIterator::move(int index) {
    int prev = index - 1;
    int tmp = this->step * prev;
    
    if ( index < 1 ) {
        index = 1;
    }
    if ( index > this->limit ) {
        index = this->limit;
    }
    if ( index == 1 ) {
        this->currentValue = this->first;
        this->currentIndex = 1;
    } else {
        this->currentValue = this->first + tmp;
        this->currentIndex = index;
    }
}

void AriProgIterator::reset() {
    this->move(1);
}

void AriProgIterator::operator++() {
    this->next();
}

void AriProgIterator::operator++(int) {
    this->operator++();
}

void AriProgIterator::operator--() {
    this->prev();
}
        
void AriProgIterator::operator--(int) {
    this->operator--();
}

int AriProgIterator::operator*() const {
    return this->value();
}
