#include "SpellcasterAction.h"

SpellcasterAction::SpellcasterAction(int hp, int mana, int damage, const std::string& title)
    : Action(hp, damage, title) {
    this->mana = new Field<int>(mana);
    this->spellbook = new std::map<int, Spell*>();
}

SpellcasterAction::~SpellcasterAction() {
    delete this->mana;
    
    std::map<int, Spell*>::iterator it = this->spellbook->begin();
    
    for ( ; it != this->spellbook->end(); it++ ) {
        delete it->second;
    }
    
    delete this->spellbook;
}

void SpellcasterAction::cast(Unit& owner, int spell_id, Unit& target) {
    this->ensureIsAlive();
    
    if ( this->spellbook->count(spell_id) == 0 ) {
        throw InvalidSpellIdException();
    }
    if ( *(this->mana) < this->spellbook->at(spell_id)->getCost() ) {
        throw OutOfManaException();
    }
    
    std::cout << "### " << owner.getName() << '(' << owner.getTitle() << ')' << ' ';
    std::cout << "cast a(an) " << this->spellbook->at(spell_id)->getName() << " spell "; 
    std::cout << target.getName() << '(' << target.getTitle() << ')' << std::endl;
    
    target.takeSpellDamage(this->spellbook->at(spell_id)->getPower());
    *(this->mana) -= this->spellbook->at(spell_id)->getCost();
}

void SpellcasterAction::addSpell(int spell_id, Spell* spell) {
    this->ensureIsAlive();

    this->spellbook->insert(std::pair<int, Spell*>(spell_id, spell));
}

void SpellcasterAction::showSpellbook(Unit& owner) {
    this->ensureIsAlive();
    
    std::cout << "--------------------------------\n";
    std::cout << "***The spellbook of " << owner.getName() << '(' << owner.getTitle() << ')' << "***\n";
    
    std::map<int, Spell*>::iterator it = this->spellbook->begin();
    
    for ( ; it != this->spellbook->end(); it++ ) {
        std::cout << *(it->second) << '\n';
    }
    
    std::cout << "--------------------------------\n";
}
