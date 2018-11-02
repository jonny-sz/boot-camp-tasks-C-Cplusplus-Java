#include "RogueAction.h"

RogueAction::RogueAction(int hp, int damage, const std::string& title)
    : Action(hp, damage, title) {}
    
RogueAction::~RogueAction() {}
    
void RogueAction::attack(Unit& owner, Unit& target) {
    this->ensureIsAlive();

    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
    std::cout << " attack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    
    target.takeDamage(this->damage);
}
