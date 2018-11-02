#include "Countable.h"

int Countable::total = 0;

Countable::Countable() {
    total += 1;
}

Countable::Countable(const Countable& copy) {
    total += 1;
}

Countable::~Countable() {
    total -= 1;
}

Countable& Countable::operator=(const Countable& copy) {    
    return *this;
}
