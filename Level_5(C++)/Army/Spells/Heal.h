#ifndef ARMY_HEAL_H 
#define ARMY_HEAL_H

#include "Spell.h"

class Heal : public Spell {
    public:
        Heal(BattleMageAction* owner, int power=-15, int cost=30, const std::string& name="Heal");
        Heal(HealerMageAction* owner, int power=-30, int cost=30, const std::string& name="Heal");
        ~Heal();
};

#endif //ARMY_HEAL_H
