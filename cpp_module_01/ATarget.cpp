#include "ATarget.hpp"
#include "ASpell.hpp"
#include <iostream>

ATarget::ATarget() : type("") {
    
}

ATarget::ATarget(ATarget const & other) {
    *this = other;
}

ATarget const & ATarget::operator=(ATarget const & rhs) {
    if (this == &rhs)
        return *this;
        
    type = rhs.type;
    return *this;
}

ATarget::~ATarget() {
    
}

ATarget::ATarget(std::string const & t) : type(t) {
    
}

std::string const & ATarget::getType() const {
    return type;
}

void ATarget::getHitBySpell(ASpell const & spell) const {
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}
