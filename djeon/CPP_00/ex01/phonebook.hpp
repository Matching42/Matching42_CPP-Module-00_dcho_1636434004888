#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class phonebook
{
    contact con;

    private:
        contact cont_list[8];

    public:
        void add(int idx);
        void search(int idx, int flag);
};

#endif