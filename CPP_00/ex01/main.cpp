#include <iostream>
#include <string>

// class 
// class는 파일로 분리해야함.

// first name, last name, nickname, phone number, darkest secret.
class contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_name;
        std::string darkest_secret;
};

class phonebook
{
    public:
        contact cont_list[8];
};

std::string str_to_upper(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

void search_to_phonebook(phonebook book)
{
    // only for test
    // 8개 이하인 경우 배열 전부 출력하지 않게 수정해야함.
    for (int i = 0; i < 8; i++)
    {
        std::cout << book.cont_list[i].first_name << std::endl;
    }
}

void add_to_phonebook(phonebook *book, contact cont, int idx)
{
    book->cont_list[idx] = cont;
}

void make_contact(contact *cont)
{
    std::string str;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            std::cout << "Enter your first name: ";
            getline(std::cin, str);
            cont->first_name = str;
        }
        else if (i == 1)
        {
            std::cout << "Enter your last name: ";
            getline(std::cin, str);
            cont->last_name = str;
        }
        else if (i == 2)
        {
            std::cout << "Enter your nickname: ";
            getline(std::cin, str);
            cont->nick_name = str;
        }
        else if (i == 3)
        {
            std::cout << "Enter your phone number: ";
            getline(std::cin, str);
            cont->phone_name = str;
        }
        else if (i == 4)
        {
            std::cout << "Enter your darkest secret: ";
            getline(std::cin, str);
            cont->darkest_secret = str;
        }
    }
}

int main()
{
    phonebook book;
    std::string cmd;
    int idx;

    idx = 0;
    while (1) {
        std::cout << "Enter your command: ";
        getline(std::cin, cmd);
        cmd = str_to_upper(cmd);
        if (idx == 8)
            idx = 0;
        if (cmd == "ADD")
        {
            // while 문 밖에서 제대로 동작 되는지 확인 필요.
            contact cont;

            make_contact(&cont);
            add_to_phonebook(&book, cont, idx);
            idx++;
        }
        else if (cmd == "SEARCH")
            search_to_phonebook(book);
        else if (cmd == "EXIT")
            break ;
    }
    
    return (0);
}