#ifndef SPELLBOOK
#define SPELLBOOK

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"

class SpellBook {
	std::vector<ASpell*> _prop;

	SpellBook(SpellBook const & other);
	SpellBook const & operator=(SpellBook const & rhs);

public:
	SpellBook();
	virtual ~SpellBook();

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const & spell_name);
	ASpell* createSpell(std::string const & spell_name);

};

#endif