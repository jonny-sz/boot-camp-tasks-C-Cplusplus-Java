#include "Priest.h"

Priest::Priest(const std::string& name) : Spellcaster(name) {
    this->action = new PriestAction(80, 100, 10, "Priest");
    
}

Priest::~Priest() {
    delete this->action;
}
