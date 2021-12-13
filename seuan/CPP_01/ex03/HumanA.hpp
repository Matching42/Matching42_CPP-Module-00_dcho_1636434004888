#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& wp;

    public:
        HumanA( std::string str, Weapon& wp );
        ~HumanA(void);
        void attack(void);
};

#endif