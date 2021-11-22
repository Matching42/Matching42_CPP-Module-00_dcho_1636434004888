#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string input);
		~Zombie();

		void announce(void);
};

Zombie* newZombie( std::string name ); // 이렇게 헤더에 선언하는게 맞겠지?
void randomChump( std::string name );

#endif