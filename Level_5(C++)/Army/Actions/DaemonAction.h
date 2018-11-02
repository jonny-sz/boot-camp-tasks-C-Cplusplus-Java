#ifndef ARMY_DAEMONACTION_H
#define ARMY_DAEMONACTION_H

#include "Action.h"
#include "../Spellcasters/Warlock.h"

class DaemonAction : public Action {
    private:
        Warlock* master;
    public:
        DaemonAction(Warlock* master, int hp, int damage, const std::string& title);
        ~DaemonAction();

        void takeDamage(int dmg);

        void turnToVampire(Unit &owner);
        void turnToWerewolf(Unit &owner);
};

#endif //ARMY_DAEMONACTION_H
