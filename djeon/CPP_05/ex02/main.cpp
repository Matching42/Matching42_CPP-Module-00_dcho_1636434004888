/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:19:24 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat test1 = Bureaucrat();
        Bureaucrat test2 = Bureaucrat("djeon", 150);
        // Bureaucrat test3 = Bureaucrat("die", -1);
        // Bureaucrat test4 = Bureaucrat("die", 160);
        test1.increaseGrade(145);
        std::cout << test1 << std::endl;
        std::cout << test2 << std::endl;
        test2.decreaseGrade(30);
        std::cout << test2 << std::endl;
        test2.increaseGrade(25); // 145
        std::cout << test2 << std::endl;
        // test2.increaseGrade(10);
        
        // Form test5 = Form();
        // Form test6 = Form("djeon's form", 50, 50);
        // test2.decreaseGrade(100);
        // test2.signForm(test6);

        test2.decreaseGrade(25); // 120
        ShrubberyCreationForm test7 = ShrubberyCreationForm("home");
        // test2.increaseGrade(27); // 147
        test2.executeForm(test7);
        test2.signForm(test7);
        test7.execute(test2);

        RobotomyRequestForm test8 = RobotomyRequestForm("home");
        test2.decreaseGrade(80); // 40
        test2.signForm(test8);
        test8.execute(test2);

        PresidentialPardonForm test9 = PresidentialPardonForm("home");
        test2.decreaseGrade(36);
        test2.signForm(test9);
        test9.execute(test2);

        test2.executeForm(test9);
    } catch (Bureaucrat::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
        return -1;
    } catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
        return -1;
    } catch (Form::NoSignException e) {
        std::cout << e.what() << std::endl;
        return -1;
    } catch (std::exception e) {
        std::cout << e.what() << std::endl;
        return -1;
    }
    std::cout << "executed successfully" << std::endl;
    return 0;
}