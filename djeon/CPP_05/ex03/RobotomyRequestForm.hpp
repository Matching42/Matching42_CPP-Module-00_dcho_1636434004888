/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:21 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:28:29 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <exception>
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &input);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm& operator = (const RobotomyRequestForm &input);

        void execute(Bureaucrat const & executor) const;
};

#endif