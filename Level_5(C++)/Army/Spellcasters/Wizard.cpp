#include "Wizard.h"

Wizard::Wizard(const std::string& name) : Spellcaster(name) {
    this->action = new WizardAction(80, 100, 10, "Wizard");
}

Wizard::~Wizard() {
    delete this->action;
}
