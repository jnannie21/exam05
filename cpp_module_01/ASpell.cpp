#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() { }

ASpell::ASpell(ASpell const & other) {
    *this = other;
}

ASpell const & ASpell::operator=(ASpell const & rhs) {
    if (this == &rhs)
        return *this;

    this->_name = rhs._name;
    this->_effects = rhs._effects;
    
    return *this;
}

ASpell::~ASpell() { }

ASpell::ASpell(std::string const & name, std::string const & effects) :
    _name(name), _effects(effects) {
        
}

std::string ASpell::getName() const { return _name; }
std::string ASpell::getEffects() const { return _effects; }

void ASpell::launch(ATarget const & target) const {
    target.getHitBySpell(*this);
}
