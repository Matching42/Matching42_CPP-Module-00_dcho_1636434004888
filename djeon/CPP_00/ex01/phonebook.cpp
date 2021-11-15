#include "phonebook.hpp"

std::string split_to_str(std::string str)
{
    std::string result;
    
    if (str.length() <= 10)
        return (str);
    else
    {
        for (int i = 0; i < 10; i++)
            result += str[i];
        result += ".";
        return (result);
    }
}

void phonebook::add(int idx)
{
    std::string str;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            std::cout << "Enter your first name: ";
            getline(std::cin, str);
            cont_list[idx].set_first_name(str);
        }
        else if (i == 1)
        {
            std::cout << "Enter your last name: ";
            getline(std::cin, str);
            cont_list[idx].set_last_name(str);
        }
        else if (i == 2)
        {
            std::cout << "Enter your nickname: ";
            getline(std::cin, str);
            cont_list[idx].set_nick_name(str);
        }
        else if (i == 3)
        {
            std::cout << "Enter your phone number: ";
            getline(std::cin, str);
            cont_list[idx].set_phone_number(str);
        }
        else if (i == 4)
        {
            std::cout << "Enter your darkest secret: ";
            getline(std::cin, str);
            cont_list[idx].set_darkest_secret(str);
        }
    }
}

void phonebook::search(int idx, int flag)
{
    int len;

    len = 8;
    if (flag == 0)
    {
        len = idx;
        idx = 0;
    }
    for (int i = 0; i < len; i++)
    {
        std::cout << i << " | ";
        std::cout << split_to_str(cont_list[idx % 8].get_first_name()) << " | ";
        std::cout << split_to_str(cont_list[idx % 8].get_last_name()) << " | ";
        std::cout << split_to_str(cont_list[idx % 8].get_nick_name()) << std::endl;
        idx++;
    }
}