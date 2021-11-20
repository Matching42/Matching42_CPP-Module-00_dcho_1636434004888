#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string _name;
		static int _index;
	public:
		Zombie();
		~Zombie();

		void zombie_init(std::string input);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif