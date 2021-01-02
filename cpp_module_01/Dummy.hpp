#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"
#include <string>

class Dummy : public ATarget {
    public:
    Dummy() : ATarget("Target Practice Dummy") { }
    Dummy(Dummy const & other) : ATarget(other) { }
    Dummy const & operator=(Dummy const & rhs) {
        if (this == &rhs)
            return *this;
        
        ATarget::operator=(rhs);
        return *this;
    }
    virtual ~Dummy() { }
    
    virtual ATarget * clone() const {
        return new Dummy(*this);
    }
    
};

#endif

