#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion()
{

}

ScalarConversion::ScalarConversion(std::string var)
{
    _Var = var;
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
	return (*this);
}

void ScalarConversion::toChar() const
{
    std::cout << "char: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
        std::cout << "'" << static_cast<char>(_Var[0]) << "'" << std::endl;
    else
    {
        int tmp = atoi(_Var.c_str());
        if (!(MIN_CHAR <= tmp && tmp <= MAX_CHAR) || isnan(tmp))
            throw (ImpossibleException());
        else if (!(32 <= tmp && tmp <= 126))
            throw (NonDisplayException());
        else
            std::cout << "'" << static_cast<char>(tmp) << "'" << std::endl;
    }
}

void ScalarConversion::toInt() const
{
    std::cout << "int: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
        std::cout << static_cast<int>(_Var[0]) << std::endl;
    else
    {
        double tmp = atof(_Var.c_str());
        if (!(MIN_INT <= tmp && tmp <= MAX_INT))
            throw (ImpossibleException());
        else
            std::cout << static_cast<int>(tmp) << std::endl;
    }
}

void ScalarConversion::toFloat() const
{
    std::cout << "float: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
    {
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << static_cast<float>(_Var[0]) << "f" << std::endl;
    }
    else
    {
        char *end;
        double tmp = std::strtod(_Var.c_str(), &end);
        float f = static_cast<float>(tmp);
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << f << "f" << std::endl;
    }
}

void ScalarConversion::toDouble() const
{
    std::cout << "double: ";
    if (_Var.length() == 1 && !isnumber(_Var[0]))
    {
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << static_cast<double>(_Var[0]) << std::endl;
    }
    else
    {
        char *end;
        double tmp = std::strtod(_Var.c_str(), &end);
        std::cout << std::fixed; 
        std::cout.precision(1);
        std::cout << tmp << std::endl;
    }
}

const char* ScalarConversion::ImpossibleException::what() const throw()
{
	return ("Impossible");
}

const char* ScalarConversion::NonDisplayException::what() const throw()
{
	return ("Non displayable");
}