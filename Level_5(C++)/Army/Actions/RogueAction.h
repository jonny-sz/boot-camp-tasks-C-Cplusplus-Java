#ifndef ARMY_ROGUEACTION_H 
#define ARMY_ROGUEACTION_H

#include "Action.h"

class RogueAction : public Action {
    public:
        RogueAction(int hp, int damage, const std::string& title);
        ~RogueAction();
        
        void attack(Unit& owner, Unit& target);
};

#endif //ARMY_ROGUEACTION_H
