#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() { }
TargetGenerator::~TargetGenerator() {
	for (std::vector<ATarget*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		delete *it;
	}
}

void TargetGenerator::learnTargetType(ATarget* p) {
	for (std::vector<ATarget*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getType() == p->getType())
			return ;
	}
	_prop.push_back(p->clone());
}

void TargetGenerator::forgetTargetType(std::string const & name) {
	for (std::vector<ATarget*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getType() == name)
		{
			delete *it;
			_prop.erase(it);
			return ;
		}
	}
}

ATarget* TargetGenerator::createTarget(std::string const & name) {
	for (std::vector<ATarget*>::iterator it = _prop.begin(); it != _prop.end(); ++it)
	{
		if ((*it)->getType() == name)
		{
			return (*it)->clone();
		}
	}
	return NULL;
}