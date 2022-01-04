/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:27:54 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 17:29:28 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
        test2.increaseGrade(25);
        std::cout << test2 << std::endl;
        test2.increaseGrade(10);
    } catch (Bureaucrat::GradeTooHighException e) {
        std::cout << e.what() << std::endl;
        return -1;
    } catch (Bureaucrat::GradeTooLowException e) {
        std::cout << e.what() << std::endl;
        return -1;
    }
    std::cout << "executed successfully" << std::endl;
    return 0;
}