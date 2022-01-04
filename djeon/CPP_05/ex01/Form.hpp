/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:00:04 by djeon             #+#    #+#             */
/*   Updated: 2021/12/15 22:37:10 by djeon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class Form {
    public:
        Form(void);
        Form(std::string nameInput, int grade1, int grade2);
        Form(const Form &input);
        ~Form(void);

        Form& operator = (const Form &input);

        bool getSign(void) const;
        std::string getName(void) const;
        int getGradeSigned(void) const;
        int getGradeExecute(void) const;
        void beSigned(Bureaucrat &input);

        class GradeTooHighException : public std::exception {
            public:
                GradeTooHighException(std::string input);
                ~GradeTooHighException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };

        class GradeTooLowException : public std::exception {
            public:
                GradeTooLowException(std::string input);
                ~GradeTooLowException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };

    private:
        const std::string name;
        const int gradeSigned;
        const int gradeExecute;
        bool sign;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif