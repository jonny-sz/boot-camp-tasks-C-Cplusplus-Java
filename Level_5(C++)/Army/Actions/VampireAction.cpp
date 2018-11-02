#include "VampireAction.h"

VampireAction::VampireAction(int hp, int damage, const std::string& title)
    : Action(hp, damage, title) {
        this->typeOfUnit = UNDEAD;
    }
    
VampireAction::~VampireAction() {}

void VampireAction::drain(Unit& target) {
    *(this->hp) += (target.getAction().getHp().getValue() / 10);
}
        
void VampireAction::infect(Unit& owner, Unit& target) {
    std::string title = target.getTitle();

    this->ensureIsAlive();
    
    target.turnToVampire();
    
    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
    std::cout << " infected " << target.getName() << '(' << title << ')' << std::endl;
}

void VampireAction::attack(Unit& owner, Unit& target) {
    Action::attack(owner, target);
    this->drain(target);
}

void VampireAction::counterAttack(Unit& owner, Unit& target) {
    if ( *(this->hp) > 0 ) {
        target.takeDamage(this->damage / 2);
        this->drain(target);

        std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
        std::cout << " counterattack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    }
}

void VampireAction::turnToVampire(Unit& owner) {
    this->ensureIsAlive();
    
    throw InfectIsImpossibleException();
}

void VampireAction::turnToWerewolf(Unit& owner) {
    this->ensureIsAlive();
    
    throw InfectIsImpossibleException();
}
