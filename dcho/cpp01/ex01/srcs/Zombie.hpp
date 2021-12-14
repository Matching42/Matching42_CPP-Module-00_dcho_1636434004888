#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void setName(std::string input);
		void announce(void);

	private:
		std::string _name;
		static int _index;
};

Zombie* zombieHorde( int N, std::string name );

#endif
