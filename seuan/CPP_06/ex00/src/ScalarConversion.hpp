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
        void toChar() const;
        void toInt() const;
        void toFloat() const;
        void toDouble() const;

	private:
        std::string _Var;
        bool _IsNaN;
};

#endif