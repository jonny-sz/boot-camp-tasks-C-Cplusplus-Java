#include "Soldier.h"

Soldier::Soldier(const std::string& name) : Unit(name) {
    this->action = new Action(100, 30, "Soldier");
}

Soldier::~Soldier() {
    delete this->action;
}
