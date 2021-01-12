#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <list>
#include "ASpell.hpp"

class Warlock {
	std::string _name;
	std::string _title;

	std::list<ASpell*> _prop;

    Warlock();
    Warlock(Warlock const & other);
    Warlock const & operator=(Warlock const & rhs);

public:
    Warlock(std::string name, std::string title);

	virtual ~Warlock();

    std::string const & getName() const;
    
    std::string const & getTitle() const;
    
    void setTitle(std::string const & t);
    
    void introduce() const;

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string spell_name);
	void launchSpell(std::string spell_name, ATarget & target);


};

#endif
