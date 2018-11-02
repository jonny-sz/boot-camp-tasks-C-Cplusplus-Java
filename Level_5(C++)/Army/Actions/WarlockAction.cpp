#include "WarlockAction.h"

WarlockAction::WarlockAction(int hp, int mana, int damage, const std::string &title)
    : BattleMageAction(hp, mana, damage, title), slave(nullptr) {
    this->addSpell(FIREBALL, new Fireball(this));
    this->addSpell(HEAL, new Heal(this));
}

WarlockAction::~WarlockAction() {
    if ( this->slave != nullptr ) {
        this->freeSlave();
    }
}

void WarlockAction::takeDamage(int dmg) {
    Action::takeDamage(dmg);
    if ( *(this->hp) == 0 ) {
        this->freeSlave();
    }
}

void WarlockAction::summon(Warlock* owner, const std::string& name) {
    int cost = this->mana->getLimit() / 2;

    this->ensureIsAlive();

    if ( *(this->mana) < cost ) {
        throw OutOfManaException();
    }
    if ( this->slave != nullptr ) {
        throw SummonImpossibleException();
    }

    this->slave = new Daemon(owner, name);
    *(this->mana) -= cost;

    std::cout << "### " << owner->getName();
    std::cout << '(' << owner->getTitle() << ')';
    std::cout << " summon " << this->slave->getName() << "(Daemon)" << std::endl;
}

Daemon* WarlockAction::daemon() {
    if ( this->slave == nullptr ) {
        throw OutOfDaemonException();
    }

    return this->slave;
}

void WarlockAction::freeSlave() {
    delete this->slave;
    this->slave = nullptr;
}
