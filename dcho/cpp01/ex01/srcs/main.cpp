#include "Zombie.hpp"

 std::string my_cin()
 {
 	std::string input;

 	std::getline(std::cin, input);
 	if (std::cin.eof() == true)
 		exit(1);
 	return (input);
 }

int main(void)
{
	Zombie 		*z;
	int			n;
	std::string	name;

	std::cout << "Input Number: ";
	std::stringstream ssInt(my_cin());
	ssInt >> n;
	std::cout << "Input Global Name: ";
	name = my_cin();
	z = zombieHorde(n, name);
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete []z;
	return (0);
}
