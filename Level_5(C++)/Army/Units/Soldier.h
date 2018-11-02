#ifndef ARMY_SOLDIER_H 
#define ARMY_SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
    public:
        Soldier(const std::string& name);
        ~Soldier();
};

#endif //ARMY_SOLDIER_H
