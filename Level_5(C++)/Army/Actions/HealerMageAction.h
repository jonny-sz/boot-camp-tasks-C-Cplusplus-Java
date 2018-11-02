#ifndef ARMY_HEALERMAGEACTION_H 
#define ARMY_HEALERMAGEACTION_H

#include "SpellcasterAction.h"

class HealerMageAction : public SpellcasterAction {
    public:
        HealerMageAction(int hp, int mana, int damage, const std::string& title);
        virtual ~HealerMageAction();
};

#endif //ARMY_HEALERMAGEACTION_H
