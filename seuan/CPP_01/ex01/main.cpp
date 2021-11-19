#include "Zombie.hpp"

int main()
{
    std::string name = "Zombieeeee";
    int N = 5;
    Zombie *pArray;
    
    pArray = zombieHorde(5, name);
    for (int i = 0; i < N; i++)
        pArray[i].announce();

    delete [] pArray;
    pArray = NULL;
    return (0);
}