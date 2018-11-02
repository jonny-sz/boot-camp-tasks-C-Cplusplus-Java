#ifndef ARMY_SPELL_H 
#define ARMY_SPELL_H

#include <iostream>
#include <cmath>

class BattleMageAction;
class HealerMageAction;

class Spell {
    protected:
        std::string name;
        int power;
        int cost;
        
    public:
        Spell(BattleMageAction* owner, int power, int cost, const std::string& name);
        Spell(HealerMageAction* owner, int power, int cost, const std::string& name);
        virtual ~Spell();
        
        const std::string& getName() const;
        const int getPower() const;
        const int getCost() const;
};

std::ostream& operator<<(std::ostream& out, const Spell& spell);

#endif //ARMY_SPELL_H
