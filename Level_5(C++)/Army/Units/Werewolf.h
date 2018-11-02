#ifndef ARMY_WEREWOLF_H 
#define ARMY_WEREWOLF_H

#include "Unit.h"
#include "../Actions/WerewolfAction.h"
#include "../Actions/WolfAction.h"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string& name);
        ~Werewolf();
};

#endif //ARMY_WEREWOLF_H
