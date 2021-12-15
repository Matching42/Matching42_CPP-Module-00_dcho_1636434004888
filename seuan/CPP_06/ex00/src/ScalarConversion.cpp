#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{

}

ScalarConversion::ScalarConversion(std::string var)
{
    _Var = var;
    _IsNaN = false;
    if (_Var.compare("nan") == 0)
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
    if (tmp < 32 || tmp > 127)
        std::cout << "Non displayable" << std::endl;
    else
    {
        char rtn = tmp;
        std::cout << rtn << std::endl;
    }
}

void ScalarConversion::toInt() const
{
    std::cout << "int: ";
}

void ScalarConversion::toFloat() const
{
    std::cout << "float: ";
}

void ScalarConversion::toDouble() const
{
    std::cout << "double: ";
}
