#include "DaemonAction.h"

DaemonAction::DaemonAction(Warlock* master, int hp, int damage, const std::string& title)
        : Action(hp, damage, title), master(master) {}

DaemonAction::~DaemonAction() {}

void DaemonAction::takeDamage(int dmg) {
    Action::takeDamage(dmg);
    if ( *(this->hp) == 0 ) {
        this->master->freeSlave();
    }
}

void DaemonAction::turnToVampire(Unit &owner) {
    this->ensureIsAlive();

    throw InfectIsImpossibleException();
}

void DaemonAction::turnToWerewolf(Unit &owner) {
    this->ensureIsAlive();

    throw InfectIsImpossibleException();
}
