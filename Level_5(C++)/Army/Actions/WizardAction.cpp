#include "WizardAction.h"

WizardAction::WizardAction(int hp, int mana, int damage, const std::string& title)
    : BattleMageAction(hp, mana, damage, title) {
    this->addSpell(FIREBALL, new Fireball(this));
    this->addSpell(HEAL, new Heal(this));
}

WizardAction::~WizardAction() {}
