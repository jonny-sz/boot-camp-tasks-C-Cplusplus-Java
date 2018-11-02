#include "Warlock.h"

Warlock::Warlock(const std::string& name) : Spellcaster(name) {
    this->action = new WarlockAction(80, 100, 10, "Warlock");
}

Warlock::~Warlock() {
    delete this->action;
}

void Warlock::summon(const std::string& name) {
    this->action->summon(this, name);
}

Daemon* Warlock::daemon() {
    return this->action->daemon();
}

void Warlock::freeSlave() {
    this->action->freeSlave();
}
