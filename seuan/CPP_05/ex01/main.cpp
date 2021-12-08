// exceptions

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    // 1. Constructor try catch
    Form a("a", 235, 235); // Too low
    Form b("b", -42, -42); // Too high

    // 2. init data
    Form c("c", 1, 2);

    Bureaucrat jim("jim", 30);
    
    // 3. signForm
    
    return 0;
}