#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
public:
    Warlock();
    Warlock(Warlock const & other);
    Warlock const & operator=(Warlock const & rhs);
    virtual ~Warlock() {
        std::cout << name << ": My job here is done!" << std::endl;
    }
    
    Warlock(std::string n, std::string t) : name(n), title(t) {
        std::cout << name << ": This looks like another boring day." << std::endl;
    }
    
    std::string const & getName() const {
        return name;
    }
    
    std::string const & getTitle() const {
        return title;
    }
    
    void setTitle(std::string const & t) {
        title = t;
    }
    
    void introduce() const {
        std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
    }
    
    
private:
//    Warlock() : name(""), title("") { }
//    Warlock(Warlock const & other) { *this = other; }
//    Warlock const & operator=(Warlock const & rhs) {
//        if (this == &other)
//            return ;
//        this->name = rhs.name;
//        this->title = rhs.title;
//    }
    std::string name;
    std::string title;
};

#endif
