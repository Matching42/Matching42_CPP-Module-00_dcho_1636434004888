// exceptions

#include "Bureaucrat.hpp"

int main ()
{
    Bureaucrat bur("James", 1);
    Bureaucrat bur2;

    std::cout << std::endl;

    std::cout << "Hi " << bur.getName() << std::endl;
    std::cout << "Your grade is " << bur.getGrade() << std::endl;

    std::cout << std::endl;

    std::cout << "Hi " << bur2.getName() << std::endl;
    std::cout << "Your grade is " << bur2.getGrade() << std::endl;
    bur2.incrementGrade();
    bur2.decrementGrade();

    // GradeTooLowException
    bur2.decrementGrade();

    // GradeTooHighException
    // bur.incrementGrade();
    std::cout << std::endl;
    return 0;
}