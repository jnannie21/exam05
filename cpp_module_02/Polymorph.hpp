#ifndef POLYMORPH
#define POLYMORPH

#include "ASpell.hpp"
#include <string>

class Polymorph : public ASpell {
public:
	Polymorph();
	~Polymorph();

	virtual ASpell * clone() const;

};

#endif