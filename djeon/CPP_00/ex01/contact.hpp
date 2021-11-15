#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class contact
{
    private:
        std::string first_name;
        std::string last_name; 
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void set_first_name(std::string str);
        void set_last_name(std::string str);
        void set_nick_name(std::string str);
        void set_phone_number(std::string str);
        void set_darkest_secret(std::string str);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_phone_number();
        std::string get_darkest_secret();
};

#endif