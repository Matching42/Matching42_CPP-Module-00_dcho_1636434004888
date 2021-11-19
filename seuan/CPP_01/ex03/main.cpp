#include "Weapon.hpp"

int main()
{
    std::string str = "sword";

    Weapon w1 = Weapon(str);

    // only test for Weapon class
    std::cout << w1.getType() << std::endl;
    std::cout << &w1.getType() << std::endl;

    return (0);
}