#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name) : Unit(name) {
    this->action = new WerewolfAction(120, 20, "Werewolf");
    this->altAction = new WolfAction(240, 40, "Wolf");
}

Werewolf::~Werewolf() {
    delete this->action;
}
