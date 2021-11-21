#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string _name;
		static int _index;
	public:
		Zombie(); // 생성자에서 string 을 인자로 받지 않아도 되려나...?
		~Zombie();

		void zombie_init(std::string input);
		void announce(void);
};

Zombie* zombieHorde( int N, std::string name );


#endif