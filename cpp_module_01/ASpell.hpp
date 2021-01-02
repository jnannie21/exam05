#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

class ATarget;

class ASpell {
    public:
    ASpell();
    ASpell(ASpell const & other);
    ASpell const & operator=(ASpell const & rhs);
    virtual ~ASpell();
    
    ASpell(std::string const & n, std::string const & e);
    
    std::string getName() const;
    std::string getEffects() const;
    
    virtual ASpell * clone() const = 0;
    
    void launch(ATarget const & target) const;
    
private:
    std::string name;
    std::string effects;
};

#endif
