/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djeon <djeon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 21:00:04 by djeon             #+#    #+#             */
/*   Updated: 2021/12/16 22:36:39 by djeon            ###   ########.fr       */
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
        Form(std::string nameInput, std::string targetInput, int grade1, int grade2);
        Form(const Form &input);
        virtual ~Form(void);

        Form& operator = (const Form &input);

        bool getSign(void) const;
        std::string getTarget(void) const;
        std::string getName(void) const;
        int getGradeSigned(void) const;
        int getGradeExecute(void) const;
        void beSigned(const Bureaucrat &input);
        virtual void execute(Bureaucrat const & executor) const = 0;

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

        class NoSignException : public std::exception {
            public:
                NoSignException(std::string input);
                ~NoSignException(void) throw();

                const char* what(void) const throw();

            private:
                const std::string message;
        };

    private:
        std::string target;
        const std::string name;
        const int gradeSigned;
        const int gradeExecute;
        bool sign;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif