/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:10:58 by djeon             #+#    #+#             */
/*   Updated: 2021/12/17 11:13:13 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void) { }

// Intern::Intern(const Intern &input) {
//     *this = input;
// }

Intern::InvalidFormNameException::InvalidFormNameException(std::string input) : message(input) { }

Intern::~Intern(void) { }

Intern::InvalidFormNameException::~InvalidFormNameException(void) throw() { }

// Intern& Intern::operator = (const Intern &input) {
//     return *this;
// }

Form* createPresidentialPardonForm(std::string input) {
    return new PresidentialPardonForm(input);
}

Form* createRobotomyRequestForm(std::string input) {
    return new RobotomyRequestForm(input);
}

Form* createShrubberyCreationForm(std::string input) {
    return new ShrubberyCreationForm(input);
}

Form* Intern::makeForm(std::string name, std::string target) {
    Form* result;
    Form* (*form_create[3])(std::string input) = {
		createPresidentialPardonForm,
        createRobotomyRequestForm,
        createShrubberyCreationForm
    };
    std::string form_name[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    bool flag = false;
    for (int i = 0; i < 3; i++) {
        if (name == form_name[i]) {
            result = form_create[i](target);
            flag = true;
            std::cout << "Intern creates " << name << std::endl;
            break ;
        }
    }
    if (flag == false)
        throw InvalidFormNameException("test");
    return result;
}

const char* Intern::InvalidFormNameException::what() const throw() {
    return message.c_str();
}