#include "GeoProgIterator.h"

GeoProgIterator::GeoProgIterator(long long first, long long step, int limit) {
    this->first = first;
    this->step = step;
    this->limit = limit;
    this->currentValue = first;
    this->currentIndex = 1;
}

GeoProgIterator::~GeoProgIterator() {}

long long GeoProgIterator::value() const {
    return this->currentValue;
}

bool GeoProgIterator::end() const {
    return this->currentIndex > this->limit;
}

bool GeoProgIterator::begin() const {
    return this->currentIndex < 1;
}

void GeoProgIterator::next() {
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
        this->currentValue *= this->step;
    }
}

void GeoProgIterator::prev() {
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
        this->currentValue /= this->step;
    }
}

void GeoProgIterator::reset() {
    this->currentValue = this->first;
    this->currentIndex = 1;
}

void GeoProgIterator::operator++() {
    this->next();
}

void GeoProgIterator::operator++(int) {
    this->operator++();
}

void GeoProgIterator::operator--() {
    this->prev();
}
        
void GeoProgIterator::operator--(int) {
    this->operator--();
}

long long GeoProgIterator::operator*() const {
    return this->value();
}
