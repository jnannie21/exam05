#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
	std::string _name;
	std::string _title;

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

};

#endif
