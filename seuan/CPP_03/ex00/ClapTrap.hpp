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
        // void set_Name(std::string name);
        // std::string get_Name(void);
        // int get_Hp(void);
        // int get_Ep(void);
        // int get_Ad(void);

    private:
        std::string _Name;
        int _Hp;
        int _Ep;
        int _Ad;  
};


#endif