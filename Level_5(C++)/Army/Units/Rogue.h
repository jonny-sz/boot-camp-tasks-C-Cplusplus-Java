#ifndef ARMY_ROGUE_H 
#define ARMY_ROGUE_H

#include "Unit.h"
#include "../Actions/RogueAction.h"

class Rogue : public Unit {
    public:
        Rogue(const std::string& name);
        ~Rogue();
};

#endif //ARMY_ROGUE_H
