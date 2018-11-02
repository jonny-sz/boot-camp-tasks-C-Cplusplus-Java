#include "Identifiable.h"

int Identifiable::lastId = 0;

Identifiable::Identifiable() {
    lastId += 1;
    this->id = lastId;
}

Identifiable::Identifiable(const Identifiable& copy) {
    lastId += 1;
    this->id = lastId;
}

Identifiable::~Identifiable() {}

int Identifiable::getId() const {
    return this->id;
}

Identifiable& Identifiable::operator=(const Identifiable& copy) {
    return *this;
}
