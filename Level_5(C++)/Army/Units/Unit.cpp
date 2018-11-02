#include "Unit.h"

Unit::Unit(const std::string& name)
    : name(name), altAction(nullptr) {
    this->observers = new std::set<Unit*>();
    this->observables = new std::set<Unit*>();
}

Unit::~Unit() {
    this->notifyObservers();
    this->notifyObservables();

    delete this->altAction;
    delete this->observers;
    delete this->observables;
}

const Action& Unit::getAction() const {
    return *(this->action);
}

const Action& Unit::getAltAction() const {
    return *(this->altAction);
}

const std::string& Unit::getName() const {
    return this->name;
}

const int Unit::getHp() const {
    return this->action->getHp().getValue();
}

const int Unit::getHpLimit() const {
    return this->action->getHp().getLimit();
}

const std::string& Unit::getTitle() const {
    return this->action->getTitle();
}

const std::set<Unit*>& Unit::getObservers() const {
    return *(this->observers);
}

const std::set<Unit*>& Unit::getObservables() const {
    return *(this->observables);
}

void Unit::setHp(int newHp) {
    this->action->setHp(newHp);
}

void Unit::addHp(int newHp) {
    this->action->addHp(newHp);
}

void Unit::setAction(Action* newAction) {
    float coef = (float)(newAction->getHp().getLimit()) / (float)(this->action->getHp().getLimit());
    int newHp = (int)(this->action->getHp().getValue() * coef);
    Action* tmp = this->action;

    newAction->setHp(newHp);

    this->action = newAction;
    this->altAction = tmp;
}

void Unit::setAltAction(Action* newAction) {
    this->altAction = newAction;
}

void Unit::removeAltAction() {
    delete this->altAction;
    this->altAction = nullptr;
}

Action* Unit::applyAltAction() {
    return this->altAction;
}

void Unit::takeDamage(int dmg) {
    this->action->takeDamage(dmg);
    if ( this->getHp() == 0 ) {
        this->notifyObservers();
        this->notifyObservables();
    }
}

void Unit::takeSpellDamage(int dmg) {
    this->action->takeSpellDamage(dmg);
    if ( this->getHp() == 0 ) {
        this->notifyObservers();
        this->notifyObservables();
    }
}

void Unit::attack(Unit& target){
    this->action->attack(*this, target);
}

void Unit::counterAttack(Unit& target) {
    this->action->counterAttack(*this, target);
}

void Unit::infect(Unit& target) {
    this->action->infect(*this, target);
}

void Unit::transform() {
    this->action->transform(*this);

    std::cout << "### " << this->name << '(';
    std::cout << this->getAltAction().getTitle() << ')';
    std::cout << " turned into a " << this->action->getTitle() << std::endl;
}

void Unit::turnToVampire() {
    this->action->turnToVampire(*this);
}

void Unit::turnToWerewolf() {
    this->action->turnToWerewolf(*this);
}

void Unit::addObserver(Unit* observer) {
    this->observers->insert(observer);
}

void Unit::removeObserver(Unit* observer) {
    this->observers->erase(observer);
}

void Unit::addObservable(Unit* observable) {
    this->observables->insert(observable);
}

void Unit::removeObservable(Unit* observable) {
    this->observables->erase(observable);
}

void Unit::notifyObservers() {
    auto it = this->observers->begin();
    for ( ; it != this->observers->end(); it++ ) {
        (*it)->addHp(this->getHpLimit() / 10);
        (*it)->removeObservable(this);
    }

    this->observers->clear();
}

void Unit::notifyObservables() {
    auto it = this->observables->begin();
    for ( ; it != this->observables->end(); it++ ) {
        (*it)->removeObserver(this);
    }

    this->observables->clear();
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getName() << unit.getAction();
    
    return out;
}
