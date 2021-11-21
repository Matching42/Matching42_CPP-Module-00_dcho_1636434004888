#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon(const std::string& type);
		// const 참조자로 받는 이유는 생성자 내에서 참조자 type를 이용한 값의 변경은 하지 않겠다!
		~Weapon();

		const std::string& getType();
		// const 참조자로 return 하는 이유는 함수 외부에서 해당 값을 변경하지 않겠다!
		void setType(const std::string& type);
	private:
		std::string _type;
};

#endif