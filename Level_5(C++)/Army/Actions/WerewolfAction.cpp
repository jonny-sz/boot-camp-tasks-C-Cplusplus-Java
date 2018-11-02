#include "WerewolfAction.h"

WerewolfAction::WerewolfAction(int hp, int damage, const std::string& title)
    : Action(hp, damage, title) {}

WerewolfAction::~WerewolfAction() {}

void WerewolfAction::transform(Unit& owner) {
    this->ensureIsAlive();
    
    owner.setAction(owner.applyAltAction());
}

void WerewolfAction::turnToVampire(Unit& owner) {
    this->ensureIsAlive();
    
    throw InfectIsImpossibleException();
}

void WerewolfAction::turnToWerewolf(Unit& owner) {
    this->ensureIsAlive();
    
    throw InfectIsImpossibleException();
}

