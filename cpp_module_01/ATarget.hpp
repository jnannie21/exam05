#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>

class ASpell;

class ATarget {
    public:
    ATarget();
    ATarget(ATarget const & other);
    ATarget const & operator=(ATarget const & rhs);
    virtual ~ATarget();
    
    ATarget(std::string const & t);
    
    std::string const & getType() const;
    
    virtual ATarget * clone() const = 0;
    
    void getHitBySpell(ASpell const & spell) const;
    
private:
    std::string type;
};

#endif

