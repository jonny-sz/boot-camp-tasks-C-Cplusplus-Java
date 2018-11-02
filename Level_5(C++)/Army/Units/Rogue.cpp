#include "Rogue.h"

Rogue::Rogue(const std::string& name) : Unit(name) {
    this->action = new RogueAction(100, 25, "Rogue");
}

Rogue::~Rogue() {
    delete this->action;
}
