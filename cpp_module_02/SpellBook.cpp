#include "SpellBook.hpp"

SpellBook::SpellBook() { }
SpellBook::~SpellBook() {
	for (std::vector<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		delete *it;
	}
}

void SpellBook::learnSpell(ASpell* spell) {
	for (std::vector<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	_prop.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const & spell_name) {
	for (std::vector<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			_prop.erase(it);
			return ;
		}
	}
}

ASpell* SpellBook::createSpell(std::string const & spell_name) {
	for (std::vector<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell_name)
		{
			return (*it)->clone();
		}
	}
	return NULL;
}
