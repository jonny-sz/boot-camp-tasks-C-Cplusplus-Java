#ifndef ARMY_WIZARD_H 
#define ARMY_WIZARD_H

#include "Spellcaster.h"
#include "../Actions/WizardAction.h"

class Wizard : public Spellcaster {
    public:
        Wizard(const std::string& name);
        ~Wizard();
};

#endif //ARMY_WIZARD_H
