#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <exception>

class ScalarConversion
{
	public:

		ScalarConversion();
		ScalarConversion(std::string var);
		~ScalarConversion();
		ScalarConversion(const ScalarConversion& sc);
		ScalarConversion &operator = (const ScalarConversion& sc);

		class InvalidException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:

};

#endif