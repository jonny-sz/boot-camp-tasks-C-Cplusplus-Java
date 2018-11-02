#include "FactorialIterator.h"

FactorialIterator::FactorialIterator(int limit) : limit(limit), current(1), factorial(1) {}

FactorialIterator::~FactorialIterator() {}

long long FactorialIterator::value() const {
    return this->factorial;
}

bool FactorialIterator::end() const {
    return this->current > this->limit;
}

bool FactorialIterator::begin() const {
    return this->current < 1;
}

void FactorialIterator::next() {
    long long tmp = this->factorial;
    
    if ( this->end() ) {
        return;
    }
    if ( this->begin() ) {
        this->current += 1;
    }
    
    this->factorial *= this->current;
    this->current += 1;
    
    if ( this->end() ) {
        this->factorial = tmp;
    }
}

void FactorialIterator::prev() {
    if ( this->begin() ) {
        return;
    }
    if ( this->end() ) {
        this->current -= 1;
    }
    
    this->current -= 1;
    
    if ( this->begin() ) {
        return;
    } else {
        this->factorial /= this->current;
    }
}

void FactorialIterator::reset() {
    this->factorial = 1;
    this->current = 1;
}

void FactorialIterator::operator++() {
    this->next();
}

void FactorialIterator::operator++(int) {
    this->operator++();
}

void FactorialIterator::operator--() {
    this->prev();
}

void FactorialIterator::operator--(int) {
    this->operator--();
}

long long FactorialIterator::operator*() const {
    return this->value();
}
