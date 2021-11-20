#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon sword = Weapon("the world best sword");

    // only test for Weapon class
    std::cout << sword.getType() << std::endl;
    std::cout << &sword.getType() << std::endl;

    // only test for HumanA class
    HumanA bob("bob", sword);
    bob.attack();
    sword.setType("some other type of club");
    bob.attack();

    // only test for HumanB class
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return (0);
}