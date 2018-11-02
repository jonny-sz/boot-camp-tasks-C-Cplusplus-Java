#ifndef ARMY_BATTLEMAGEACTION_H 
#define ARMY_BATTLEMAGEACTION_H

#include "SpellcasterAction.h"

class BattleMageAction : public SpellcasterAction {
    public:
        BattleMageAction(int hp, int mana, int damage, const std::string& title);

    BattleMageAction();

    virtual ~BattleMageAction();
};

#endif //ARMY_BATTLEMAGEACTION_H
