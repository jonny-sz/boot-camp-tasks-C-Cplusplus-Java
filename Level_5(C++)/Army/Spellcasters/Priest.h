#ifndef ARMY_PRIEST_H 
#define ARMY_PRIEST_H

#include "Spellcaster.h"
#include "../Actions/PriestAction.h"

class Priest : public Spellcaster {
    public:
        Priest(const std::string& name);
        ~Priest();
};

#endif //ARMY_PRIEST_H
