#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <exception>

# define MAX_INT std::numeric_limits<int>::max()
# define MAX_FLOAT std::numeric_limits<float>::max()
# define MAX_DOUBLE std::numeric_limits<double>::max()
# define MIN_INT std::numeric_limits<int>::min()
# define MIN_FLOAT std::numeric_limits<float>::min()
# define MIN_DOUBLE std::numeric_limits<double>::min()

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