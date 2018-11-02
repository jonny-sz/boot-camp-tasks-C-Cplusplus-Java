#ifndef ARMY_HEALERACTION_H 
#define ARMY_HEALERACTION_H

#include "HealerMageAction.h"
#include "../Spells/Fireball.h"
#include "../Spells/Heal.h"

class HealerAction : public HealerMageAction {
    public:
        HealerAction(int hp, int mana, int damage, const std::string& title);
        ~HealerAction();
};

#endif //ARMY_HEALERACTION_H
