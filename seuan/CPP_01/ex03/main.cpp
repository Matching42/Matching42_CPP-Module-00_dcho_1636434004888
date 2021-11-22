#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    // Create Weapon class
    Weapon sword = Weapon("the world best sword");

    // HumanA
    HumanA bob("bob", sword);
    bob.attack();
    sword.setType("some other type of sword");
    bob.attack();

    // HumanB
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    return (0);
}