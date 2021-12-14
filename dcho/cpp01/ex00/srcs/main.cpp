#include "Zombie.hpp"

int	main(void)
{
	std::string nameHeap = "heapZombie";
	std::string nameStack = "stackZombie";

	Zombie *heap = newZombie(nameHeap);
	heap->announce();
	delete(heap);
	heap = NULL;

	randomChump(nameStack);
	return (0);
}
