#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{

}

ScalarConversion::ScalarConversion(std::string var)
{
    _Var = var;
    _IsNaN = false;
    if (isnan(atof(_Var.c_str())) == 1)
        _IsNaN = true;
}

ScalarConversion::~ScalarConversion()
{

}

ScalarConversion::ScalarConversion(const ScalarConversion &sc)
{
    *this = sc;
}

ScalarConversion& ScalarConversion::operator=(const ScalarConversion &sc)
{
    if (this == &sc)
		return (*this);
	_Var = sc._Var;
    _IsNaN = sc._IsNaN;
	return (*this);
}

void ScalarConversion::toChar() const
{
    std::cout << "char: ";

    double tmp = atof(_Var.c_str());

    // Impossible
    if (tmp < 0 || tmp > 255 || _IsNaN == true)
        std::cout << "impossible" << std::endl;
    // Non displayable
    else if (tmp < 32 || tmp > 127)
        std::cout << "Non displayable" << std::endl;
    // Displayable
    else
        std::cout << "'" << static_cast<char>(tmp) << "'" << std::endl;
}

void ScalarConversion::toInt() const
{
    double tmp = atof(_Var.c_str());
    std::cout << "int: ";
    if (tmp < MIN_INT || tmp > MAX_INT || _IsNaN == true)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(tmp) << std::endl;
}

void ScalarConversion::toFloat() const
{
    double tmp = atof(_Var.c_str());
    std::cout << "float: ";
    if (tmp < -MAX_FLOAT || tmp > MAX_FLOAT)
        std::cout << "impossible" << std::endl;
    else if (_IsNaN == true)
        std::cout << "nanf" << std::endl;
    else
        std::cout << static_cast<float>(tmp) << std::endl;
}

void ScalarConversion::toDouble() const
{
    double tmp = atof(_Var.c_str());
    std::cout << "double: ";
    if (tmp < -MAX_DOUBLE || tmp > MAX_DOUBLE)
        std::cout << "impossible" << std::endl;
    else if (_IsNaN == true)
        std::cout << "nan" << std::endl;
    else
        std::cout << static_cast<double>(tmp) << std::endl;
}
