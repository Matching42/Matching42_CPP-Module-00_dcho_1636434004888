#include "Zombie.hpp"

int main()
{
    std::string name = "Zombie_";
    int N = 10;
    Zombie *pArray = zombieHorde(N, name);

    for (int i = 0; i < N; i++)
        pArray[i].announce();
    delete [] pArray;
    pArray = NULL;
    return (0);
}