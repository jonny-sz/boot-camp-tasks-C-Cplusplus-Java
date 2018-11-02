#ifndef ARMY_ACTION_H 
#define ARMY_ACTION_H

#include <iostream>
#include <map>
#include <set>
#include "Field.h"
#include "TypesOfUnits.h"
#include "../Exceptions.h"
#include "../Units/Unit.h"

class Unit;
class Spell;
class Warlock;
class Daemon;

class Action {
    protected:
        Field<int>* hp;
        Field<int>* mana;
        int damage;
        int typeOfUnit;
        std::string title;

        std::map<int, Spell*>* spellbook;

        void ensureIsAlive();

    public:
        Action(int hp, int damage, const std::string& title);
        virtual ~Action();

        const Field<int>& getHp() const;
        const Field<int>* getMana() const;
        const int getDamage() const;
        const int getType() const;
        const std::string& getTitle() const;

        void setHp(int newHp);
        void addHp(int newHp);

        virtual void takeDamage(int dmg);
        virtual void takeSpellDamage(int dmg);

        virtual void attack(Unit& owner, Unit& target);
        virtual void counterAttack(Unit& owner, Unit& target);

        virtual void cast(Unit& owner, int spell_id, Unit& target);
        virtual void addSpell(int sprell_id, Spell* spell);
        virtual void showSpellbook(Unit& owner);

        virtual void infect(Unit& owner, Unit& target);
        virtual void transform(Unit& owner);

        virtual void turnToVampire(Unit& owner);
        virtual void turnToWerewolf(Unit& owner);

        virtual void summon(Warlock* owner, const std::string& name);
        virtual Daemon* daemon();
        virtual void freeSlave();
};

std::ostream& operator<<(std::ostream& out, const Action& action);

#endif //ARMY_ACTION_H
