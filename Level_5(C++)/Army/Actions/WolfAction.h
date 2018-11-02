#ifndef ARMY_WOLFACTION_H 
#define ARMY_WOLFACTION_H

#include "WerewolfAction.h"

class WolfAction : public WerewolfAction {
    public:
        WolfAction(int hp, int damage, const std::string& title);
        ~WolfAction();
        
        void takeSpellDamage(int dmg);
        
        void infect(Unit& owner, Unit& target);
};

#endif //ARMY_WOLFACTION_H
