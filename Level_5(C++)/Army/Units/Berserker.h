#ifndef ARMY_BERSERKER_H 
#define ARMY_BERSERKER_H

#include "Unit.h"
#include "../Actions/BerserkerAction.h"

class Berserker : public Unit {
    public:
        Berserker(const std::string& name);
        ~Berserker();
};

#endif //ARMY_BERSERKER_H
