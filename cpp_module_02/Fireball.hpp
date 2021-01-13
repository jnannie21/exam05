#ifndef FIREBALL
#define FIREBALL

#include "ASpell.hpp"
#include <string>

class Fireball : public ASpell {
public:
	Fireball();
	~Fireball();

	virtual ASpell * clone() const;

};

#endif