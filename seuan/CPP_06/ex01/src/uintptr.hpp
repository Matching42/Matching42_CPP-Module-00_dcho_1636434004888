#ifndef UINTPTR_HPP
# define UINTPTR_HPP

# include "Data.hpp"
# include <stdint.h>
# include <iostream>
# include <string>

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif