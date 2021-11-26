#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(void);
        ~ScavTrap();
        void guardGate();

    private:
};

#endif