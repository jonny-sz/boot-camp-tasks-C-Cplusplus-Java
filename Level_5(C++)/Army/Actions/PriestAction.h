#ifndef ARMY_PRIESTACTION_H 
#define ARMY_PRIESTACTION_H

#include "HealerMageAction.h"
#include "../Spells/Fireball.h"
#include "../Spells/Heal.h"

class PriestAction : public HealerMageAction {
    public:
        PriestAction(int hp, int mana, int damage, const std::string& title);
        ~PriestAction();
        
        void attack(Unit& owner, Unit& target);
        void counterAttack(Unit& owner, Unit& target);
};

#endif //ARMY_PRIESTACTION_H
