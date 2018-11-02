#include "Unit.h"

Unit::Unit(const std::string& name, int hp, int dmg) {
    this->name = name;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->damage = dmg;
}

Unit::~Unit() {}

void Unit::ensureIsAlive() {
    if ( this->hitPoints == 0 ) {
        throw UnitIsDead();
    }
}

int Unit::getDamage() const {
    return this->damage;
}

int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::addHitPoints(int hp) {
    this->ensureIsAlive();
    
    if ( hp < 0 ) {
        hp = 0;
    }
    
    std::cout << "------" << this->name << " drank an elixir of health" << "------" << std::endl;
    
    this->hitPoints += hp;
    
    if ( this->hitPoints > this->hitPointsLimit ) {
        this->hitPoints = this->hitPointsLimit;
    }
}

void Unit::takeDamage(int dmg) {
    this->ensureIsAlive();
    
    if ( dmg < 0 ) {
        dmg = 0;
    }
    
    this->damage = dmg;
}

void Unit::attack(Unit& enemy) {
    this->ensureIsAlive();
    enemy.ensureIsAlive();
    
    std::cout << "------" << this->name << " Attack " << enemy.name << "------" << std::endl;
    
    enemy.hitPoints -= this->damage;
    
    if ( enemy.hitPoints < 0 ) {
        enemy.hitPoints = 0;
    }
    if ( enemy.hitPoints > 0 ) {
        std::cout << "------" << enemy.name << " Counterattack " << this->name << "------" << std::endl;
        enemy.counterAttack(*this);
    }
}

void Unit::counterAttack(Unit& enemy) {
    enemy.hitPoints -= this->damage/2;
    
    if ( enemy.hitPoints < 0 ) {
        enemy.hitPoints = 0;
    }
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << '"' << unit.getName() << '"' 
        << '[' << unit.getHitPoints() << '/' << unit.getHitPointsLimit() << ']'
        << " damage: " << unit.getDamage();
}
