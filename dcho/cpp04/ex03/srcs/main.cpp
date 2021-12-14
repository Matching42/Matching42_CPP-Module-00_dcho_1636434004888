#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();//mInventory 모두 널 초기화
    src->learnMateria(new Ice());//[0]은 ice 대입 받음
    src->learnMateria(new Cure());//[1]은 cure 대입 받음
    ICharacter* me = new Character("me");//mName은 me, mInventory은 모두 널
    AMateria* tmp;

	tmp = src->createMateria("ice");//[0] clone() 반환
    me->equip(tmp);//[0]에 대입 받음
    tmp = src->createMateria("cure");
    me->equip(tmp);//[1]에 대입 받음

    ICharacter* bob = new Character("bob");//mName은 bob, mInventory은 모두 널
    me->use(0, *bob);//ice
    me->use(1, *bob);//cure

    delete bob; delete me; delete src;
    system("leaks a.out");
    return 0;
}