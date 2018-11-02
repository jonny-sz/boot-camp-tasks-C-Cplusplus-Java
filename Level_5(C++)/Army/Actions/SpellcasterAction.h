#ifndef ARMY_SPELLCASTERACTION_H 
#define ARMY_SPELLCASTERACTION_H

#include <map>
#include "Action.h"
#include "../Spells/Spell.h"
#include "../Spells/SpellId.h"

class Spell;

class SpellcasterAction : public Action {
    public:
        SpellcasterAction(int hp, int mana, int damage, const std::string& title);
        virtual ~SpellcasterAction();
        
        virtual void cast(Unit& owner, int spell_id, Unit& target);
        virtual void addSpell(int sprell_id, Spell* spell);
        virtual void showSpellbook(Unit& owner);
};

#endif //ARMY_SPELLCASTERACTION_H
