#ifndef ARMY_BERSERKERACTION_H 
#define ARMY_BERSERKERACTION_H

#include "Action.h"

class BerserkerAction : public Action {
    public:
        BerserkerAction(int hp, int damage, const std::string& title);
        ~BerserkerAction();
    
    void takeSpellDamage(int dmg);
};

#endif //ARMY_BERSERKERACTION_H
