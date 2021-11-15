#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

std::string get_line_cpp(void);

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