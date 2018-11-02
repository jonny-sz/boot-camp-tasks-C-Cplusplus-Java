#ifndef ARMY_WIZARDACTION_H 
#define ARMY_WIZARDACTION_H

#include "BattleMageAction.h"
#include "../Spells/Fireball.h"
#include "../Spells/Heal.h"

class WizardAction : public BattleMageAction {
    public:
        WizardAction(int hp, int mana, int damage, const std::string& title);
        ~WizardAction();
};

#endif //ARMY_WIZARDACTION_H
