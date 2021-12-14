#include "Dog.hpp"
#include "Cat.hpp"

#define MAX 10

int main(void)
{
	// First part: pdf main
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	j = NULL;
	delete i;
	i = NULL;
	// system("leaks a.out");

	// Seoncd part: Deep Copy
	Animal *animals[MAX];

	for (int i = 0; i < MAX; i++)
	{
		if (!(i % 2))
		{
			animals[i] = new Dog();
			// animals[i].
			// 어떻게 접근 하면 좋을지 모르겠음

		}
		else
		{
			animals[i] = new Cat();

		}
	}





	return (0);
}
