#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name) : Spellcaster(name) {
    this->action = new NecromancerAction(80, 100, 10, "Necromancer");
}

Necromancer::~Necromancer() {
    delete this->action;
}
