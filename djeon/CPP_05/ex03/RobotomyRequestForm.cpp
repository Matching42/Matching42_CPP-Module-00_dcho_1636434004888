/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:15 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:28:14 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default", "default", 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("default", target, 72, 45) { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &input) : Form(input) { }

RobotomyRequestForm::~RobotomyRequestForm(void) { }

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &input) {
    Form::operator = (input);
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    Form::execute(executor);
    srand((unsigned int) time(NULL));
    int num = rand();
    if (num % 2 == 1) {
        std::cout << "drill drill" << std::endl;
        std::cout << getTarget() << " has been robotomized successfully 50% of the time " << std::endl;
    }
    else {
        std::cout << "failure" << std::endl;
    }
}