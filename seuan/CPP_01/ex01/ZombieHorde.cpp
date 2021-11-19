#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *pArray = new Zombie[N];

    for (int i = 0; i < N; i++)
        pArray[i].set_name(name);
    return (pArray);
}