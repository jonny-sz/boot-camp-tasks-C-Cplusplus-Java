#include "PrimeIterator.h"

bool PrimeIterator::isPrime(int* prime, int n) {
    for ( ; *prime <= ceil(sqrt(n)); prime++ ) {
        if ( !fmod(n, *prime) ) {
            return 0;
        }
    }
    return 1;
}

PrimeIterator::PrimeIterator(int limit) : current(0), limit(limit), maxIndex(0), tmpValue(3) {
    this->prime = (int*)malloc(sizeof(int)*this->limit);
    this->prime[0] = 2;
}

PrimeIterator::~PrimeIterator() {
    free(this->prime);
}

int PrimeIterator::value() {
    if ( this->end() ) {
        this->current -= 1;
    }
    if ( this->begin() ) {
        this->current += 1;
    }
    
    return this->prime[current];
}

bool PrimeIterator::end() const {
    return this->current >= this->limit;
}

bool PrimeIterator::begin() const {
    return this->current < 0;
}

void PrimeIterator::next() {
    if ( this->end() ) {
        return;
    }
    if ( this->begin() ) {
        this->current += 1;
    }
    
    this->current += 1;
    
    if ( this->end() ) {
        return;
    }
    if ( this->current > this->maxIndex ) {
        bool isGetPrime = false;
        
        for ( ; !isGetPrime; ) {
            if ( this->isPrime(prime, this->tmpValue) ) {
                this->prime[current] = this->tmpValue;
                isGetPrime = true;
                this->tmpValue += 1;
                this->maxIndex += 1;
            } else {
                this->tmpValue += 1;
            }
        }
    }
}

void PrimeIterator::prev() {
    if ( this->begin() ) {
        return;
    }
    if ( this->end() ) {
        this->current -= 1;
    }
    
    this->current -= 1;
}

void PrimeIterator::reset() {
    this->current = 0;
}

void PrimeIterator::operator++() {
    this->next();
}

void PrimeIterator::operator++(int) {
    this->operator++();
}

void PrimeIterator::operator--() {
    this->prev();
}

void PrimeIterator::operator--(int) {
    this->operator--();
}

int PrimeIterator::operator*() {
    return this->value();
}
