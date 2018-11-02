#include "Vampire.h"

Vampire::Vampire(const std::string& name) : Unit(name) {
    this->action = new VampireAction(120, 30, "Vampire");
}

Vampire::~Vampire() {
    delete this->action;
}
