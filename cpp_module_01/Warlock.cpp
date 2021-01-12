#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	for (std::list<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		delete *it;
	}
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const {
	return _name;
}

std::string const & Warlock::getTitle() const {
	return _title;
}

void Warlock::setTitle(std::string const & title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	for (std::list<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	_prop.push_back(spell->clone());
}

void Warlock::forgetSpell(std::string spell_name) {
	for (std::list<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell_name)
		{
			delete *it;
			_prop.erase(it);
			return ;
		}
	}
}

void Warlock::launchSpell(std::string spell_name, ATarget & target) {
	for (std::list<ASpell*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getName() == spell_name)
		{
			(*it)->launch(target);
			return ;
		}
	}
}
