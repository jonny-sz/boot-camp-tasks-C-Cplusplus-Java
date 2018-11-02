#include "Action.h"
#include "VampireAction.h"
#include "WerewolfAction.h"

Action::Action(int hp, int damage, const std::string& title)
    : hp(new Field<int>(hp)), damage(damage), title(title), mana(nullptr), typeOfUnit(ALIVE) {}

Action::~Action() {
    delete this->hp;
}

void Action::ensureIsAlive() {
    if ( *(this->hp) == 0 ) {
        throw UnitIsDeadException();
    }
}

const Field<int>& Action::getHp() const {
    return *(this->hp);
}

const Field<int>* Action::getMana() const {
    return this->mana;
}

const int Action::getDamage() const {
    return this->damage;
}

const int Action::getType() const {
    return this->typeOfUnit;
}

const std::string& Action::getTitle() const {
    return this->title;
}

void Action::setHp(int newHp) {
    *(this->hp) = newHp;
}

void Action::addHp(int newHp) {
    *(this->hp) += newHp;
}

void Action::takeDamage(int dmg) {
    this->ensureIsAlive();
    
    *(this->hp) -= dmg;
}

void Action::takeSpellDamage(int dmg) {
    this->ensureIsAlive();
    
    *(this->hp) -= dmg;
}

void Action::attack(Unit& owner, Unit& target) {
    this->ensureIsAlive();
    
    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
    std::cout << " attack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    
    target.takeDamage(this->damage);
    
    target.counterAttack(owner);
}

void Action::counterAttack(Unit& owner, Unit& target) {
    if ( *(this->hp) > 0 ) {
        target.takeDamage(this->damage / 2);

        std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')';
        std::cout << " counterattack " << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    }
}

void Action::cast(Unit& owner, int spell_id, Unit& target) {
    this->ensureIsAlive();

    throw OutOfActionException();
}

void Action::addSpell(int sprell_id, Spell* spell) {
    this->ensureIsAlive();
    
    throw OutOfActionException();
}

void Action::showSpellbook(Unit& owner) {
    this->ensureIsAlive();
    
    throw OutOfActionException();
}

void Action::infect(Unit& owner, Unit& target) {
    this->ensureIsAlive();
    
    throw OutOfActionException();
}

void Action::transform(Unit& owner) {
    this->ensureIsAlive();
    
    throw OutOfActionException();
}

void Action::turnToVampire(Unit& owner) {
    this->ensureIsAlive();
    
    owner.setAction(new VampireAction(120, 30, "Vampire"));
    owner.removeAltAction();
}

void Action::turnToWerewolf(Unit& owner) {
    this->ensureIsAlive();
    
    owner.setAction(new WerewolfAction(120, 20, "Werewolf"));
    owner.removeAltAction();
}

void Action::summon(Warlock* owner, const std::string& name) {
    this->ensureIsAlive();

    throw OutOfActionException();
}

Daemon* Action::daemon() {
    this->ensureIsAlive();

    throw OutOfActionException();
}

void Action::freeSlave() {
    this->ensureIsAlive();

    throw OutOfActionException();
}

std::ostream& operator<<(std::ostream& out, const Action& action) {
    out << '(' << action.getTitle() << ") ";
    out << "HP" << action.getHp() << ' ';
    
    if ( action.getMana() != nullptr ) {
        out << "M" << *(action.getMana()) << ' ';
    }
    
    out << "DMG: " << action.getDamage();
    
    return out;
}
