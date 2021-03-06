#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap(std::string name);
        DiamondTrap(void);
        ~DiamondTrap(void);
        void whoAmI();
        void attack(std::string const & target);

    private:
        std::string _Name;
};

#endif