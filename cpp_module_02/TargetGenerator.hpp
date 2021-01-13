#ifndef TARGETGENERATOR
#define TARGETGENERATOR

#include <string>
#include <iostream>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator {
	std::vector<ATarget*> _prop;

	TargetGenerator(TargetGenerator const & other);
	TargetGenerator const & operator=(TargetGenerator const & rhs);

public:
	TargetGenerator();
	virtual ~TargetGenerator();

	void learnTargetType(ATarget* p);
	void forgetTargetType(std::string const & name);
	ATarget* createTarget(std::string const & name);


};

#endif