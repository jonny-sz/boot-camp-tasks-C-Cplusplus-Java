#include "Fireball.h"

Fireball::Fireball(BattleMageAction* owner, int power, int cost, const std::string& name)
    : Spell(owner, power, cost, name) {}

Fireball::Fireball(HealerMageAction* owner, int power, int cost, const std::string& name)
    : Spell(owner, power, cost, name) {}


Fireball::~Fireball() {}
