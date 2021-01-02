#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell() {
    
}

ASpell::ASpell(ASpell const & other) {
    *this = other;
}

ASpell const & ASpell::operator=(ASpell const & rhs) {
    if (this == &rhs)
        return *this;
    this->name = rhs.name;
    this->effects = rhs.effects;
    
    return *this;
}

ASpell::~ASpell() {
    
}

ASpell::ASpell(std::string const & n, std::string const & e) :
    name(n), effects(e) {
        
}

std::string ASpell::getName() const {
    return name;
}
std::string ASpell::getEffects() const {
    return effects;
}

void ASpell::launch(ATarget const & target) const {
    target.getHitBySpell(*this);
}
