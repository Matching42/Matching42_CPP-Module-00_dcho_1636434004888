#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z = new Zombie[N]; // 여러개 할당 바로 하고 초기화 하려면 어떻게 할까?

	for (int i = 0; i < N; i++)
		z[i].zombie_init(name);
	return (z);
}