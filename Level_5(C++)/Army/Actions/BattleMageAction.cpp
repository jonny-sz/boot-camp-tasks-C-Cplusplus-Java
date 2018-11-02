#include "BattleMageAction.h"

BattleMageAction::BattleMageAction(int hp, int mana, int damage, const std::string& title)
    : SpellcasterAction(hp, mana, damage, title) {}

BattleMageAction::~BattleMageAction() {}
