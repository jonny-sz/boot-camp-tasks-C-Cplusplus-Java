#include "Spellcaster.h"

Spellcaster::Spellcaster(const std::string& name) : Unit(name) {}

Spellcaster::~Spellcaster() {}

void Spellcaster::cast(int spell_id, Unit& target) {
    this->action->cast(*this, spell_id, target);
}

void Spellcaster::addSpell(int spell_id, Spell* spell) {
    this->action->addSpell(spell_id, spell);
}

void Spellcaster::showSpellbook() {
    this->action->showSpellbook(*this);
}
