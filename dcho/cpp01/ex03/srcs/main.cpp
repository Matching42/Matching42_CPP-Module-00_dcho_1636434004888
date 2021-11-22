#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
  {
    Weapon club = Weapon("crude spiked club"); // ""안에 있는 것은 cstring 임
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club1");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club2");
    jim.attack();
  }
}