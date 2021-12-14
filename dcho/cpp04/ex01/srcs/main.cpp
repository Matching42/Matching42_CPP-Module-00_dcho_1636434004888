#include "Dog.hpp"
#include "Cat.hpp"

#define MAX 10

int main(void)
{

	// First part: Leaks Test
	Animal *animals[MAX];

	for (int i = 0; i < MAX; i++)
	{
		if (!(i % 2))
		{
			animals[i] = new Dog();
			animals[i]->makeSound();
			// 어떻게 접근 하면 좋을지 모르겠음
		}
		else
		{
			animals[i] = new Cat();
			animals[i]->makeSound();
		}
	}
	// system("leaks a.out");
	for (int i = 0; i < MAX; i++)
	{
		/* code */
	}

	// Second part : Deep Copy

	Dog *dog1 = new Dog();
	// Cat *cat1 = new Cat();

	Dog *dog2 = new Dog(*dog1);
	// Cat *cat2 = new Cat(*cat1);
	printf("%p\n", dog1->getBrain());
	printf("%p\n", dog2->getBrain());
	delete dog1;
	delete dog2;




	return (0);
}