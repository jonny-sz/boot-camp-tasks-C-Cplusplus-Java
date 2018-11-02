#include "BerserkerAction.h"

BerserkerAction::BerserkerAction(int hp, int damage, const std::string& title)
    : Action(hp, damage, title) {}

BerserkerAction::~BerserkerAction() {}
    
void BerserkerAction::takeSpellDamage(int dmg) {
    this->ensureIsAlive();
}
