#ifndef ARMY_NECROMANCERACTION_H
#define ARMY_NECROMANCERACTION_H

#include "BattleMageAction.h"
#include "../Spells/Fireball.h"
#include "../Spells/Heal.h"

class NecromancerAction : public BattleMageAction {
    public:
        NecromancerAction(int hp, int mana, int damage, const std::string& title);
        ~NecromancerAction();

        void cast(Unit& owner, int spell_id, Unit& target);

        void turnToVampire(Unit& owner);
        void turnToWerewolf(Unit& owner);
};

#endif //ARMY_NECROMANCERACTION_H
