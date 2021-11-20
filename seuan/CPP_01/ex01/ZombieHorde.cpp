#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *pArray = new Zombie[N];
    char num;

    for (int i = 0; i < N; i++)
    {
        num = i + '0';
        pArray[i].set_name((name + num));
    }
    return (pArray);
}