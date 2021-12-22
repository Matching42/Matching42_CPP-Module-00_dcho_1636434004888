#include "iter.hpp"

int main( void )
{
    std::array<int, 5> a = {1, 2, 3, 4, 5};

    ::iter(a, a.size(), add_five);
    return 0;
}