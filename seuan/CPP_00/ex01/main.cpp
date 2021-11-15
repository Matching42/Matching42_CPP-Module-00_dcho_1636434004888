#include <iostream>
#include <string>

// class 
// class는 파일로 분리해야함.

class contact
{
    private:
        std::string first_name;
        std::string last_name; 
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;

    public:
        void set_first_name(std::string str) { first_name = str; }
        void set_last_name(std::string str) { last_name = str; }
        void set_nick_name(std::string str) { nick_name = str; }
        void set_phone_number(std::string str) { phone_number = str; }
        void set_darkest_secret(std::string str) { darkest_secret = str; }
        std::string get_first_name() { return first_name; }
        std::string get_last_name() { return last_name; }
        std::string get_nick_name() { return nick_name; }
        std::string get_phone_number() { return phone_number; }
        std::string get_darkest_secret() { return darkest_secret; }
};

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


class phonebook
{
    contact con;

    private:
        contact cont_list[8];

    public:
        void add(int idx);
        void search(int idx, int flag);
};

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

std::string str_to_upper(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

int main()
{
    phonebook book;
    std::string cmd;
    int idx;
    int flag;

    idx = 0;
    flag = 0;
    while (1) {
        std::cout << "Enter your command: ";
        getline(std::cin, cmd);
        cmd = str_to_upper(cmd);
        if (idx == 8)
        {
            idx = 0;
            flag = 1;
        }
        if (cmd == "ADD")
            book.add(idx++);
        else if (cmd == "SEARCH")
            book.search(idx, flag);
        else if (cmd == "EXIT")
            break ;
    }
    return (0);
}