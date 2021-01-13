#ifndef BRICKWALL
#define BRICKWALL

#include "ATarget.hpp"
#include <string>

class BrickWall : public ATarget {
public:
	BrickWall();
	~BrickWall();

	virtual ATarget * clone() const;

};

#endif