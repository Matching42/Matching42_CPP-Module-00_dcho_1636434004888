#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# define S_HP 100
# define S_EP 50
# define S_AD 20

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(void);
        ~ScavTrap();
        void guardGate();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        using ClapTrap::beRepaired;

    private:
        int _guard_mode;
};

#endif