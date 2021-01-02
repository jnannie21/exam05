#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"
#include <string>

class Fwoosh : public ASpell {
    public:
    Fwoosh() : ASpell("Fwoosh", "fwooshed") { }
    Fwoosh(Fwoosh const & other) : ASpell(other) { }
    Fwoosh const & operator=(Fwoosh const & rhs) {
        if (this == &rhs)
            return *this;
        
        ASpell::operator=(rhs);
        return *this;
        
    }
    virtual ~Fwoosh() { }
    
    virtual ASpell * clone() const {
        return new Fwoosh(*this);
    }

};

#endif
