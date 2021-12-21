#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath>

class ScalarConversion
{
	public:
		ScalarConversion();
		ScalarConversion(std::string input);
		~ScalarConversion();
		ScalarConversion(ScalarConversion& copy);
		ScalarConversion& operator = (const ScalarConversion& sc);

		void conversion();
		void toChar(double param);
		void toInt(double param);
		void toFloat(double param);
		void toDouble(double param);


	private:
		std::string _input;

};


#endif