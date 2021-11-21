#include "Weapon.hpp"

Weapon::Weapon(const std::string& type):
	_type(type)
	{}
// 멤버변수가 const일때 생성자에서 대입 연산자 대신 이렇게 넣어준다.
// const가 아니더라도 이렇게 쓰는게 좋다.
// 스트링은 객체이다 생성자를 가지고 있다.
// Int 같은 경우에는 생성자가 없으므로 생성자를 호출하게 되면 값을 대입 시켜준다.

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
	return (_type);
}

void Weapon::setType(const std::string& type)
{
	_type = type;
}