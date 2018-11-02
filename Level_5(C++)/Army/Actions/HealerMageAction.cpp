#include "HealerMageAction.h"

HealerMageAction::HealerMageAction(int hp, int mana, int damage, const std::string& title)
    : SpellcasterAction(hp, mana, damage, title) {}

HealerMageAction::~HealerMageAction() {}
