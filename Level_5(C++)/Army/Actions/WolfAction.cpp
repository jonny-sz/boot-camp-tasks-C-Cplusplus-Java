#include "WolfAction.h"

WolfAction::WolfAction(int hp, int damage, const std::string& title)
    : WerewolfAction(hp, damage, title) {}

WolfAction::~WolfAction() {}

void WolfAction::takeSpellDamage(int dmg) {
    this->ensureIsAlive();
    
    *(this->hp) -= (dmg * 2);
}

void WolfAction::infect(Unit& owner, Unit& target) {
    std::string title = target.getTitle();

    this->ensureIsAlive();
    
    target.turnToWerewolf();
    
    target.setAltAction(new WolfAction(240, 40, "Wolf"));

    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
    std::cout << " infected " << target.getName() << '(' << title << ')' << std::endl;
}
