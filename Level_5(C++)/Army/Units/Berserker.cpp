#include "Berserker.h"

Berserker::Berserker(const std::string& name) : Unit(name) {
    this->action = new BerserkerAction(90, 30, "Berserker");
}

Berserker::~Berserker() {
    delete this->action;
}
