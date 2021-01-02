#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
public:
    Warlock();
    Warlock(Warlock const & other);
    Warlock const & operator=(Warlock const & rhs);
    virtual ~Warlock() {
        std::cout << name << ": My job here is done!" << std::endl;
    }
    
    Warlock(std::string n, std::string t) : name(n), title(t), learned() {
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
    
    void learnSpell(ASpell * spell) {
        int i = 0;
        while (learned[i])
        {
            if ((spell->getName() == learned[i]->getName()) || i == 999)
                return ;
            i++;
        }
        
        learned[i] = spell;
    }
    
    void forgetSpell( std::string name) {
        int i = 0;
        while (i < 1000)
        {
            if (learned[i] && name == learned[i]->getName())
            {
                learned[i] = NULL;
                break ;
            }
            i++;
        }
    }
    
    void launchSpell(std::string name, ATarget & target) {
        int i = 0;
        while (i < 1000)
        {
            if (learned[i] && name == learned[i]->getName())
            {
                learned[i]->launch(target);
                break ;
            }
            i++;
        }
    }
    
private:
    std::string name;
    std::string title;
    ASpell *learned[1000];
};

#endif
