#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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