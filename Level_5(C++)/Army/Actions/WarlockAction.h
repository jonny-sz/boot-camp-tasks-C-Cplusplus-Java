#ifndef ARMY_WARLOCKACTION_H
#define ARMY_WARLOCKACTION_H

#include "BattleMageAction.h"
#include "../Units/Daemon.h"
#include "../Spells/Fireball.h"
#include "../Spells/Heal.h"

class WarlockAction : public BattleMageAction {
    private:
        Daemon* slave;

    public:
        WarlockAction(int hp, int mana, int damage, const std::string& title);
        ~WarlockAction();

        void takeDamage(int dmg);

        void summon(Warlock* owner, const std::string& name);
        Daemon* daemon();
        void freeSlave();
};

#endif //ARMY_WARLOCKACTION_H
