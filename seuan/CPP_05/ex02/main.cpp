// exceptions
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    // ShrubberyCreationForm
    Bureaucrat jim("jim", 136);
    
    // 1. Constructor
    Form *i = new ShrubberyCreationForm(jim);
    // ShrubberyCreationForm a(jim);

    // 2. Sign
    // i->beSigned(jim);

    // To-do list
    // Bureaucrat - Form 상속 제거
    // 파일 입출력 구현 (ASCII tree)
    // if문에서 출력 대신 throw 교체
    return 0;
}