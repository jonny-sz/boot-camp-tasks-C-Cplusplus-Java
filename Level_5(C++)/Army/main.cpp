#include <iostream>
#include "Spells/SpellId.h"
#include "Units/Soldier.h"
#include "Units/Rogue.h"
#include "Units/Berserker.h"
#include "Units/Vampire.h"
#include "Units/Werewolf.h"
#include "Spellcasters/Wizard.h"
#include "Spellcasters/Healer.h"
#include "Spellcasters/Priest.h"
#include "Spellcasters/Necromancer.h"
#include "Spellcasters/Warlock.h"

using namespace std;

void showObservers(Unit& unit) {
    auto it = unit.getObservers().begin();

    cout << unit.getName() << '(' << unit.getAction().getTitle() << ") - Observers:\n";

    for ( ; it != unit.getObservers().end(); it++ ) {
        cout << *(*it) << '\n';
    }
}

void showObservables(Unit& unit) {
    auto it = unit.getObservables().begin();

    cout << unit.getName() << '(' << unit.getAction().getTitle() << ") - Observables:\n";

    for ( ; it != unit.getObservables().end(); it++ ) {
        cout << *(*it) << '\n';
    }
}

int main() {
    Soldier* soldier1 = new Soldier("Ben");
    Soldier* soldier2 = new Soldier("Jane");
    Rogue* rogue1 = new Rogue("Max");
    Wizard* wizard1 = new Wizard("Gandalf");
    Healer* healer1 = new Healer("Arven");
    Berserker* berserker1 = new Berserker("Olaf");
    Priest* priest1 = new Priest("Aramis");
    Vampire* vampire1 = new Vampire("Dracula");
    Werewolf* werewolf1 = new Werewolf("Vlad");
    Necromancer* necromancer1 = new Necromancer("Nazgul");
    Warlock* warlock1 = new Warlock("Adolf");

    cout << endl;

    cout << *soldier1 << endl;
    cout << *soldier2 << endl;
    cout << *rogue1 << endl;
    cout << *wizard1 << endl;
    cout << *healer1 << endl;
    cout << *berserker1 << endl;
    cout << *priest1 << endl;
    cout << *vampire1 << endl;
    cout << *werewolf1 << endl;
    cout << *necromancer1 << endl;
    cout << *warlock1 << endl;

    cout << "-------------------" << endl;

    wizard1->showSpellbook();
    healer1->showSpellbook();
    priest1->showSpellbook();
    necromancer1->showSpellbook();
    warlock1->showSpellbook();

    cout << "-------------------" << endl;

    soldier1->attack(*soldier2);
    rogue1->attack(*soldier2);
    wizard1->cast(HEAL, *soldier2);
    wizard1->cast(FIREBALL, *soldier2);
    healer1->cast(HEAL, *soldier2);
//    wizard1->cast(FIREBALL, *berserker1);
    priest1->attack(*vampire1);
    rogue1->attack(*werewolf1);
    rogue1->attack(*werewolf1);
    rogue1->attack(*werewolf1);
    rogue1->attack(*werewolf1);
    priest1->cast(FIREBALL, *werewolf1);
//    vampire1->attack(*werewolf1);
//    vampire1->infect(*soldier1);
//    priest1->attack(*soldier1);
//    soldier1->infect(*vampire1);
    werewolf1->transform();
//    werewolf1->transform();
//    werewolf1->infect(*soldier1);
//    soldier1->transform();
//    soldier1->infect(*soldier2);
//    soldier2->transform();
//    wizard1->cast(FIREBALL, *soldier2);
    warlock1->summon("O'Dimm");
    warlock1->daemon()->attack(*soldier1);
    rogue1->attack(*warlock1->daemon());
    rogue1->attack(*warlock1->daemon());
    rogue1->attack(*warlock1->daemon());
//    rogue1->attack(*warlock1->daemon());
    warlock1->cast(HEAL, *warlock1->daemon());
//    necromancer1->cast(FIREBALL, *soldier1);
//    necromancer1->cast(FIREBALL, *soldier2);
    rogue1->attack(*soldier1);
    rogue1->attack(*soldier2);

    cout << endl;

    showObservers(*soldier1);
    cout << endl;

    showObservers(*soldier2);
    cout << endl;

    showObservables(*necromancer1);
    cout << endl;

    rogue1->attack(*necromancer1);
    rogue1->attack(*soldier1);
//    rogue1->attack(*soldier2);
//    rogue1->attack(*soldier2);
    necromancer1->cast(FIREBALL, *soldier2);
    necromancer1->cast(FIREBALL, *soldier2);

    cout << endl;

    showObservers(*soldier1);
    cout << endl;

    showObservers(*soldier2);
    cout << endl;

    showObservables(*necromancer1);
    cout << endl;

    cout << "-------------------" << endl;

    cout << *soldier1 << endl;
    cout << *soldier2 << endl;
    cout << *rogue1 << endl;
    cout << *wizard1 << endl;
    cout << *healer1 << endl;
    cout << *berserker1 << endl;
    cout << *priest1 << endl;
    cout << *vampire1 << endl;
    cout << *werewolf1 << endl;
    cout << *necromancer1 << endl;
    cout << *warlock1 << endl;
    cout << *warlock1->daemon() << endl;

    delete soldier1;
    delete soldier2;
    delete rogue1;
    delete wizard1;
    delete healer1;
    delete berserker1;
    delete priest1;
    delete vampire1;
    delete werewolf1;
    delete necromancer1;
    delete warlock1;

    return 0;
}