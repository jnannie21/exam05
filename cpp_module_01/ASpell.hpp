#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

class ATarget;

class ASpell {
	std::string _name;
	std::string _effects;


    public:
    ASpell();
    ASpell(ASpell const & other);
    ASpell const & operator=(ASpell const & rhs);
    virtual ~ASpell();
    
    ASpell(std::string const & name, std::string const & effects);
    
    std::string getName() const;
    std::string getEffects() const;
    
    virtual ASpell * clone() const = 0;
    
    void launch(ATarget const & target) const;
    
};

#endif
