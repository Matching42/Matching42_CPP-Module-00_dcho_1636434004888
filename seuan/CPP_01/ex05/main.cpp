#include "Karen.hpp"

int main()
{
    Karen girl;
    girl.complain("DEBUG");

    Karen *girl2 = &girl;
    girl2->complain("WaRnInG");

    Karen &girl3 = girl;
    girl3.complain("info");

    return (0);
}