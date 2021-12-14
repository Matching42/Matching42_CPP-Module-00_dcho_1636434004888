#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

std::string get_line_cpp(void);

class phonebook
{
    private:
        contact cont_list[8];

    public:
        void add(int idx);
        void search(int idx, int flag);

        phonebook(void);
        ~phonebook(void);
};

#endif