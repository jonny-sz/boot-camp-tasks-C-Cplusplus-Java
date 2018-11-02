#ifndef ARMY_HEALER_H 
#define ARMY_HEALER_H

#include "Spellcaster.h"
#include "../Actions/HealerAction.h"

class Healer : public Spellcaster {
    public:
        Healer(const std::string& name);
        ~Healer();
};

#endif //ARMY_HEALER_H
