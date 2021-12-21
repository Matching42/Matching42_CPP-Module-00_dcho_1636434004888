#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    Base *ptr;

    srand((unsigned int)time(NULL));
	int num = rand();
	if (num % 3 == 0)
    {
        ptr = new A();
        std::cout << "A generated." << std::endl;
    }
    else if (num % 3 == 1)
	{
        ptr = new B();
        std::cout << "B generated." << std::endl;
    }
    else
    {
        ptr = new C();
        std::cout << "C generated." << std::endl;
    }
    return ptr;
}