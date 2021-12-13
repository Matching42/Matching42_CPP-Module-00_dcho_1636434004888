#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
    public:
        Form();
        Form(std::string name, int gradeSign, int gradeExecute);
        virtual ~Form();
        Form(const Form& form);
        Form &operator = (const Form& form);

        // getter
        std::string getName() const;
        int getGradeSign() const;
        int getGradeExecute() const;
        bool getIsSigned() const;

        // setter
        void setName( std::string name );
        void setGradeSign( int grade );
        void setGradeExecute( int grade );
        void setIsSigned( bool sign );

        int isValidGrades(int gradeSign, int gradeExecute);
        void beSigned(const Bureaucrat& bur);


        class Exception : public std::exception
        {
            public:
                virtual const char* what(void) const throw();
        };
        class GradeTooHighException : public Form::Exception
        {
            public:
                const char* what(void) const throw();
        };
        class GradeTooLowException : public Form::Exception
        {
            public:
                const char* what(void) const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;

    private:
        std::string _name;
        int _gradeSign;
        int _gradeExecute;
        bool _isSigned;
};

#endif