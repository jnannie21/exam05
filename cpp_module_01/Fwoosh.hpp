#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"
#include <string>

class Fwoosh : public ASpell {
    public:
    Fwoosh();
    ~Fwoosh();
    
    virtual Fwoosh * clone() const;

};

#endif
