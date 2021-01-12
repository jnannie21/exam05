#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>

class ASpell;

class ATarget {
	std::string _type;

    public:
    ATarget();
    ATarget(ATarget const & other);
    ATarget const & operator=(ATarget const & rhs);
    virtual ~ATarget();
    
    ATarget(std::string const & type);
    
    std::string const & getType() const;
    
    virtual ATarget * clone() const = 0;
    
    void getHitBySpell(ASpell const & spell) const;

};

#endif

