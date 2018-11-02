#include "HealerAction.h"

HealerAction::HealerAction(int hp, int mana, int damage, const std::string& title)
    : HealerMageAction(hp, mana, damage, title) {
    this->addSpell(FIREBALL, new Fireball(this));
    this->addSpell(HEAL, new Heal(this));
}

HealerAction::~HealerAction() {}
