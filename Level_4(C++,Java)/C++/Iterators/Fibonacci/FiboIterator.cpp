#include "FiboIterator.h"

FiboIterator::FiboIterator(int limit) : limit(limit), current(0), maxIndex(1) {
    this->isNegativeRange = false;
    
    if ( this->limit < 0 ) {
        this->limit *= -1;
        this->isNegativeRange = true;
    }
    
    this->fibo = (long long*)malloc(sizeof(long long)*this->limit);
    this->fibo[0] = 0;
    this->fibo[1] = 1;
}

FiboIterator::~FiboIterator() {
    free(this->fibo);
}

long long FiboIterator::value() {
    if ( this->end() ) {
        this->current -= 1;
    }
    if ( this->begin() ) {
        this->current += 1;
    }
    
    return this->fibo[current];
}

bool FiboIterator::end() const {
    return this->current >= this->limit;
}

bool FiboIterator::begin() const {
    return this->current < 0;
}

void FiboIterator::next() {
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
    if ( !this->isNegativeRange ) {
        if ( this->current > this->maxIndex ) {
            this->fibo[current] = this->fibo[current-1] + this->fibo[current-2];
            this->maxIndex += 1;
        }
    } else {
        if ( this->current > this->maxIndex ) {
            this->fibo[current] = this->fibo[current-2] - this->fibo[current-1];
            this->maxIndex += 1;
        }
    }
}

void FiboIterator::prev() {
    if ( this->begin() ) {
        return;
    }
    if ( this->end() ) {
        this->current -= 1;
    }
    
    this->current -= 1;
}

void FiboIterator::reset() {
    this->current = 0;
}

void FiboIterator::operator++() {
    this->next();
}

void FiboIterator::operator++(int) {
    this->operator++();
}

void FiboIterator::operator--() {
    this->prev();
}

void FiboIterator::operator--(int) {
    this->operator--();
}

long long FiboIterator::operator*() {
    return this->value();
}
