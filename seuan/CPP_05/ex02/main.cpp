// exceptions
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    // ShrubberyCreationForm
    Bureaucrat jim("jim", 137);
    
    // 1. Constructor
    ShrubberyCreationForm a(jim);

    // 2. Sign
    a.beSigned(jim);

    return 0;
}