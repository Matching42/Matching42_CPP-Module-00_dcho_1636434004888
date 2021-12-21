#include "Base.hpp"

Base* generate(void);
// void identify(Base* base_ptr);
// void identify(Base& base_ptr);

int main()
{
    Base *base_ptr = generate();

    delete base_ptr;
    base_ptr = NULL;
    system("leaks a.out");
}