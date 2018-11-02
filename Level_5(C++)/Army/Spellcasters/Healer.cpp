#include "Healer.h"

Healer::Healer(const std::string& name) : Spellcaster(name) {
    this->action = new HealerAction(80, 100, 10, "Healer");
    
}

Healer::~Healer() {
    delete this->action;
}
