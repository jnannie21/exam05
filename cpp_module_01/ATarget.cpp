#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget() {
    
}

ATarget::ATarget(ATarget const & other) {
    *this = other;
}

ATarget const & ATarget::operator=(ATarget const & rhs) {
    if (this == &rhs)
        return *this;
        
    _type = rhs._type;
    return *this;
}

ATarget::~ATarget() { }

ATarget::ATarget(std::string const & type) : _type(type) { }

std::string const & ATarget::getType() const { return _type; }

void ATarget::getHitBySpell(ASpell const & spell) const {
    std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
