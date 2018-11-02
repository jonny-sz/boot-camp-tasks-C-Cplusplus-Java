#ifndef ARMY_UNIT_H 
#define ARMY_UNIT_H

#include <iostream>
#include "../Actions/Action.h"

class Action;

class Unit {
    protected:
        std::string name;
        Action* action;
        Action* altAction;

        std::set<Unit*>* observers;
        std::set<Unit*>* observables;
        
    public:
        Unit(const std::string& name);
        virtual ~Unit();
        
        const Action& getAction() const;
        const Action& getAltAction() const;
        const std::string& getName() const;
        const int getHp() const;
        const int getHpLimit() const;
        const std::string& getTitle() const;

        const std::set<Unit*>& getObservers() const;
        const std::set<Unit*>& getObservables() const;

        void setHp(int newHp);
        void addHp(int newHp);

        void setAction(Action* newAction);
        void setAltAction(Action* newAction);
        
        void removeAltAction();
        Action* applyAltAction();
        
        void takeDamage(int dmg);
        void takeSpellDamage(int dmg);
        
        void attack(Unit& target);
        void counterAttack(Unit& target);
        
        void infect(Unit& target);
        void transform();
                
        void turnToVampire();
        void turnToWerewolf();

        void addObserver(Unit* observer);
        void removeObserver(Unit* observer);
        void addObservable(Unit* observable);
        void removeObservable(Unit* observable);

        void notifyObservers();
        void notifyObservables();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //ARMY_UNIT_H
