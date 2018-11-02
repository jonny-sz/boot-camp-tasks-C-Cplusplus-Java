#include "Heal.h"

Heal::Heal(BattleMageAction* owner, int power, int cost, const std::string& name)
    : Spell(owner, power, cost, name) {}

Heal::Heal(HealerMageAction* owner, int power, int cost, const std::string& name)
    : Spell(owner, power, cost, name) {}


Heal::~Heal() {}
