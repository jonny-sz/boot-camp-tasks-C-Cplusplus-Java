#include "PriestAction.h"

PriestAction::PriestAction(int hp, int mana, int damage, const std::string& title)
    : HealerMageAction(hp, mana, damage, title) {
    this->addSpell(FIREBALL, new Fireball(this));
    this->addSpell(HEAL, new Heal(this));
}

PriestAction::~PriestAction() {}

void PriestAction::attack(Unit& owner, Unit& target) {
    this->ensureIsAlive();

    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
    std::cout << " attack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    
    if ( target.getAction().getType() == UNDEAD ) {
        target.takeDamage(this->damage * 2);
    } else {
        target.takeDamage(this->damage);
    }
    
    target.counterAttack(owner);
}

void PriestAction::counterAttack(Unit& owner, Unit& target) {
    if ( *(this->hp) > 0 ) {
        if ( target.getAction().getType() == UNDEAD ) {
            target.takeDamage(this->damage);
        } else {
            target.takeDamage(this->damage / 2);
        }

        std::cout << "### " << owner.getName() << '(' << owner.getTitle();
        std::cout << " counterattack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    }
}
