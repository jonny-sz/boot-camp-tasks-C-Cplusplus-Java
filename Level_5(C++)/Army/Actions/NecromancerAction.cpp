#include "NecromancerAction.h"

NecromancerAction::NecromancerAction(int hp, int mana, int damage, const std::string& title)
    : BattleMageAction(hp, mana, damage, title) {
    this->addSpell(FIREBALL, new Fireball(this));
    this->addSpell(HEAL, new Heal(this));
    this->typeOfUnit = UNDEAD;
}

NecromancerAction::~NecromancerAction() {}

void NecromancerAction::cast(Unit& owner, int spell_id, Unit& target) {
    this->ensureIsAlive();

    if ( this->spellbook->count(spell_id) == 0 ) {
        throw InvalidSpellIdException();
    }
    if ( *(this->mana) < this->spellbook->at(spell_id)->getCost() ) {
        throw OutOfManaException();
    }

    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')' << ' ';
    std::cout << "cast a(an) " << this->spellbook->at(spell_id)->getName() << " spell ";
    std::cout << target.getName() << '(' << target.getTitle() << ')' << std::endl;

    if ( target.getHp() > 0 ) {
        owner.addObservable(&target);
        target.addObserver(&owner);
    }

    target.takeSpellDamage(this->spellbook->at(spell_id)->getPower());
    *(this->mana) -= this->spellbook->at(spell_id)->getCost();
}

void NecromancerAction::turnToVampire(Unit& owner) {
    this->ensureIsAlive();

    throw InfectIsImpossibleException();
}

void NecromancerAction::turnToWerewolf(Unit& owner) {
    this->ensureIsAlive();

    throw InfectIsImpossibleException();
}
