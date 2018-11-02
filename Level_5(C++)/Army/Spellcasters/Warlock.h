#ifndef ARMY_WARLOCK_H
#define ARMY_WARLOCK_H

#include "Spellcaster.h"
#include "../Actions/WarlockAction.h"

class Daemon;

class Warlock : public Spellcaster {
    public:
        Warlock(const std::string& name);
        ~Warlock();

        void summon(const std::string& name);
        Daemon* daemon();
        void freeSlave();
};

#endif //ARMY_WARLOCK_H
