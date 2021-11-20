#include "HumanA.hpp"

// REF 초기화
HumanA::HumanA( std::string str, Weapon& wp) : name(str), wp(wp) {};

HumanA::~HumanA()
{
    ;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with his " << wp.getType() << std::endl;
}