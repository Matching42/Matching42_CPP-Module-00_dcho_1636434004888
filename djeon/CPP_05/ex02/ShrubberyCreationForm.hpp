/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:43:33 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 23:26:08 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &input);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm& operator = (const ShrubberyCreationForm &input);

        void execute(Bureaucrat const & executor) const;

        class NotOpenFileException : public std::exception {
            public:
                NotOpenFileException(std::string input);
                ~NotOpenFileException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;  
        };
};

#endif