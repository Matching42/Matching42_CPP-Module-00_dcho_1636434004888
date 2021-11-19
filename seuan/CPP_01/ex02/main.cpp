#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *stringPTR = NULL; 
    stringPTR = &str; // 포인터는 주소값을 할당
    std::string &stringREF = str; // 레퍼런스는 대상을 직접 할당. NULL로 초기화할 수 없고, 선언과 동시에 초기화해야한다.

    // 1. Print address
    std::cout << "str: " << str << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "&stringREF: " << &stringREF << std::endl;

    // 2. Print string
    std::cout << "*stringPTR: "<< *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

    return (0);
}