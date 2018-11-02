#ifndef ARMY_FIREBALL_H 
#define ARMY_FIREBALL_H

#include "Spell.h"

class Fireball : public Spell {
    public:
        Fireball(BattleMageAction* owner, int power=30, int cost=30, const std::string& name="Fireball");
        Fireball(HealerMageAction* owner, int power=15, int cost=30, const std::string& name="Fireball");
        ~Fireball();
};

#endif //ARMY_FIREBALL_H
