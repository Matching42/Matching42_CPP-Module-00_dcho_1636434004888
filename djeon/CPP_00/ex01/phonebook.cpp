#include "phonebook.hpp"

std::string split_to_str(std::string str)
{
    std::string result;
    
    if (str.length() > 10)
    {
        for (int i = 0; i < 9; i++)
            result += str[i];
        result += ".";
        return (result);
    }
    else
        return (str);
}

std::string get_line_cpp(void)
{
    std::string str;

    getline(std::cin, str);
    if (std::cin.eof() == true)
    {
        std::cout << std::endl;
        exit (0);
    }
    return (str);
}

phonebook::phonebook(void)
{
    std::cout << "Created phonebook successfully" << std::endl;
}

phonebook::~phonebook(void)
{
    std::cout << "Goodbye my phonebook" << std::endl;
}

void phonebook::add(int idx)
{    
    std::cout << "Enter your first name: ";
    cont_list[idx].set_first_name(get_line_cpp());
    std::cout << "Enter your last name: ";
    cont_list[idx].set_last_name(get_line_cpp());
    std::cout << "Enter your nickname: ";
    cont_list[idx].set_nick_name(get_line_cpp());
    std::cout << "Enter your phone number: ";
    cont_list[idx].set_phone_number(get_line_cpp());
    std::cout << "Enter your darkest secret: ";
    cont_list[idx].set_darkest_secret(get_line_cpp());
}

void phonebook::search(int idx, int flag)
{
    std::string input;
    int len;
    int list_idx;

    len = 8;
    if (flag == 0)
    {
        len = idx;
        idx = 0;
    }
    list_idx = idx;
    for (int i = 0; i < len; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << split_to_str(cont_list[list_idx % 8].get_first_name()) << "|";
        std::cout << std::setw(10) << split_to_str(cont_list[list_idx % 8].get_last_name()) << "|";
        std::cout << std::setw(10) << split_to_str(cont_list[list_idx % 8].get_nick_name()) << std::endl;
        list_idx++;
    }
    list_idx = idx;
    
    std::cout << "Enter Index name: ";
    input = get_line_cpp();
    if (input == "")
        std::cout << "Plz enter the number" << std::endl;
    else if (input.length() >= 2 || input[0] - '0' >= len)
        std::cout << "invalid index number" << std::endl;
    else
    {
        list_idx += input[0] - '0';
        std::cout << "First name: ";
        std::cout << cont_list[list_idx % 8].get_first_name() << std::endl;
        std::cout << "Last name: ";
        std::cout << cont_list[list_idx % 8].get_last_name() << std::endl;
        std::cout << "Nickname: ";
        std::cout << cont_list[list_idx % 8].get_nick_name() << std::endl;
        std::cout << "Phone number: ";
        std::cout << cont_list[list_idx % 8].get_phone_number() << std::endl;
        std::cout << "Darkest secret: ";
        std::cout << cont_list[list_idx % 8].get_darkest_secret() << std::endl;
    }
}