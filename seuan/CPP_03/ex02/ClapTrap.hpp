#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ~ClapTrap(void);
        ClapTrap& operator = (const ClapTrap& cp);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _Name;
        int _Hp;
        int _Ep;
        int _Ad;  
};


#endif