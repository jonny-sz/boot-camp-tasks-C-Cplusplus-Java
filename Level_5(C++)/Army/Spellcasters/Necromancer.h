#ifndef ARMY_NECROMANCER_H 
#define ARMY_NECROMANCER_H

#include "Spellcaster.h"
#include "../Actions/NecromancerAction.h"

class Necromancer : public Spellcaster {
    public:
        Necromancer(const std::string& name);
        ~Necromancer();
};

#endif //ARMY_NECROMANCER_H
