#ifndef ARMY_VAMPIREACTION_H 
#define ARMY_VAMPIREACTION_H

#include "Action.h"

class VampireAction : public Action {
    protected:
        void drain(Unit& target);
    
    public:
        VampireAction(int hp, int damage, const std::string& title);
        ~VampireAction();
        
        void infect(Unit& owner, Unit& target);
        
        void attack(Unit& owner, Unit& target);
        void counterAttack(Unit& owner, Unit& target);
        
        void turnToVampire(Unit& owner);
        void turnToWerewolf(Unit& owner);
};

#endif //ARMY_VAMPIREACTION_H
