#ifndef ARMY_VAMPIRE_H 
#define ARMY_VAMPIRE_H

#include "Unit.h"
#include "../Actions/VampireAction.h"

class Vampire : public Unit {
    public:
        Vampire(const std::string& name);
        ~Vampire();
};

#endif //ARMY_VAMPIRE_H
