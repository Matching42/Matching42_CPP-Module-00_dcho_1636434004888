#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "pointer by str: " << &str << std::endl;
    std::cout << "pointer by stringPTR: " << stringPTR << std::endl;
    std::cout << "pointer by stringREF: " << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "string by stringPTR: " << *stringPTR << std::endl;
    std::cout << "string by stringREF: " << stringREF << std::endl;
    std::cout << std::endl;
}