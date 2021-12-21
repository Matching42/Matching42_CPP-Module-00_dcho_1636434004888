#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
	{}

ScalarConversion::ScalarConversion(std::string input)
	: _input(input)
	{}

ScalarConversion::~ScalarConversion()
	{}

ScalarConversion::ScalarConversion(ScalarConversion& copy)
{
	*this = copy;
}

ScalarConversion& ScalarConversion::operator = (const ScalarConversion& sc)
{
	if (this == &sc)
		return (*this);
	_input = sc._input;
	return (*this);
}

void ScalarConversion::conversion()
{

	std::cout << std::fixed;
	std::cout.precision(1);
	if (_input.length() == 1 && !(isnumber(_input.at(0))))
	{
		std::cout << "char:" << _input << std::endl;
		std::cout << "int:" << static_cast<int>(_input.at(0)) << std::endl;
		std::cout << "float:" << static_cast<float>(_input.at(0)) << "f" << std::endl;
		std::cout << "double:" << static_cast<double>(_input.at(0)) << std::endl;
	}
	else
	{
		double res = atof(_input.c_str());
		toChar(res);
		toInt(res);
		toFloat(res);
		toDouble(res);
	}
}

void ScalarConversion::toChar(double param)
{
	std::cout << "char:";
	if (isnan(param) || CHAR_MAX > param || CHAR_MIN < param)
		std::cout << " impossible" << std::endl;
	else if (!(param >= 32 && param <= 126))
		std::cout << " Non displayable" << std::endl;
	else
		std::cout << " '" << static_cast<char>(param) << "'" <<  std::endl;

}

void ScalarConversion::toInt(double param)
{
	std::cout << "int:";
	if (param > INT_MAX || param < INT_MIN || isnan(param))
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<int>(param) <<  std::endl;
}

void ScalarConversion::toFloat(double param)
{
	std::cout << "float:";
	if ((param > __FLT_MAX__ || param < -__FLT_MAX__ )&& !isinf(param))
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<float>(param) << "f" << std::endl;
}

void ScalarConversion::toDouble(double param)
{
	std::cout << "double:";
	if ((param > __DBL_MAX__ || param < -__DBL_MAX__) && !isinf(param))
		std::cout << " impossible" << std::endl;
	else
		std::cout << " " << static_cast<double>(param) << std::endl;
}
