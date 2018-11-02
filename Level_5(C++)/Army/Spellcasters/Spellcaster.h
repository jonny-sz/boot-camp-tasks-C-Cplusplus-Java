#ifndef ARMY_SPELLCASTER_H 
#define ARMY_SPELLCASTER_H

#include "../Units/Unit.h"
#include "../Actions/SpellcasterAction.h"

class Spell;

class Spellcaster : public Unit {
    public:
        Spellcaster(const std::string& name);
        virtual ~Spellcaster();

        virtual void cast(int spell_id, Unit& target);
        void addSpell(int spell_id, Spell* spell);
        void showSpellbook();
};

#endif //ARMY_SPELLCASTER_H
