#include "Spell.h"

Spell::Spell(BattleMageAction* owner, int power, int cost, const std::string& name)
    : power(power), cost(cost), name(name) {}
    
Spell::Spell(HealerMageAction* owner, int power, int cost, const std::string& name)
    : power(power), cost(cost), name(name) {}

Spell::~Spell() {}
        
const std::string& Spell::getName() const {
    return this->name;
}

const int Spell::getPower() const {
    return this->power;
}

const int Spell::getCost() const {
    return this->cost;
}


std::ostream& operator<<(std::ostream& out, const Spell& spell) {
    out << spell.getName() << ":\n";
    out << "power(" << abs(spell.getPower()) << "), ";
    out << "cost(" << spell.getCost() << ')';
    
    return out;
}
