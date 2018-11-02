#ifndef ARMY_WEREWOLFACTION_H 
#define ARMY_WEREWOLFACTION_H

#include "Action.h"

class WerewolfAction : public Action {
    public:
        WerewolfAction(int hp, int damage, const std::string& title);
        ~WerewolfAction();
        
        void transform(Unit& owner);
        
        void turnToVampire(Unit& owner);
        void turnToWerewolf(Unit& owner);
};

#endif //ARMY_WEREWOLFACTION_H
