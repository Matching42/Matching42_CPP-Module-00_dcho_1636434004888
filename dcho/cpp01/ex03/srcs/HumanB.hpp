#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(const std::string& name);
		~HumanB();
		void setWeapon(Weapon& weapon);
		void attack();

	private:
		std::string _name;
		Weapon *_weapon;

};

#endif
