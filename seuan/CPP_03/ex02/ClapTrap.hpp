#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(void);
        ~ClapTrap(void);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_Name(void);
        int get_Hp(void);
        int get_Ep(void);
        int get_Ad(void);
        void set_Name(std::string name);
        void set_Hp(int amount);
        void set_Ep(int amount);
        void set_Ad(int amount);

    private:
        std::string _Name;
        int _Hit_points;
        int _Energy_points;
        int _Attack_damage;  
};


#endif