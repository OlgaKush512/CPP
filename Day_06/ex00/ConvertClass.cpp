#include "ConvertClass.hpp"


ConvertClass::ConvertClass(void) : _data("")
{
	this->_Int = 0;
	this->_Char = 0;
	this->_Float = 0.0f;
	this->_Double = 0.0;
}

ConvertClass::ConvertClass(const char *data_raw) : _data_raw(data_raw), _data(static_cast<std::string>(data_raw))
{
	this->_Int = 0;
	this->_Char = 0;
	this->_Float = 0.0f;
	this->_Double = 0.0;
}

ConvertClass::ConvertClass(ConvertClass const &other)
{
	*this = other;
}
ConvertClass & ConvertClass::operator = (const ConvertClass &other)
{
	(void) other;
	return (*this);
}

ConvertClass::~ConvertClass()
{
	return ;
}

void	ConvertClass::_printFloatString(void)
{
	int len = this->_data.size();

	std::cout << "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: " << this->_data << std::endl
	<< "double: " << (this->_data).erase(len - 1, 1) << std::endl;
}

void	ConvertClass::_printDoubleString(void)
{
	std::cout << "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: " << this->_data + 'f'
	<< "double: " <<  this->_data << std::endl;
}

int	ConvertClass::_fillUpDigit(void)
{
	// if (at > INT_MAX || at < INT_MIN)
	// 	return (INCORRECT_INPUT);
	_Double = strtod(_data_raw, NULL); // atof
	_Float = static_cast<float>(_Double);
	if (_Double > INT_MAX || _Double < INT_MIN)
		return (INCORRECT_INPUT);
	_Int = static_cast<int>(_Double);
	if (!isprint(_Int))
		return (INCORRECT_CHAR);
	_Char = static_cast<char>(_Int);
		return (2);
}

int	ConvertClass::_checkDigit(void)
{
	unsigned long	found = 0;

	if (this->_data.find_first_not_of("0123456789f.-", 0) != std::string::npos)
		return (INCORRECT_INPUT);
	if ((found = this->_data.find("-", 0)) != std::string::npos)
	{
		if (found != 0)
			return (INCORRECT_INPUT);
		else if (found != this->_data.rfind("-"))
			return (INCORRECT_INPUT);
	}
	if ((found = this->_data.find(".", 0)) != std::string::npos)
	{
		if (found != this->_data.rfind("."))
			return (INCORRECT_INPUT);
		if (this->_data.find("f", 0) == std::string::npos)
		{
			_type = 4;
			return (_fillUpDigit());
		}
	}
	if ((found = this->_data.find("f", 0)) != std::string::npos)
	{
		unsigned long found_p = this->_data.find(".", 0);
		if ((found_p == std::string::npos) || found < found_p)
			return (INCORRECT_INPUT);
		else
		{
			_type = 3;
			return (_fillUpDigit());
		}
	}
	else
		return (_fillUpDigit());
}

int	ConvertClass::_checkFloatLiteral(void)
{
	if ((this->_data.compare("-inff") == 0) || (this->_data.compare("+inff") == 0)
		|| (this->_data.compare("nanf") == 0))
	{
		_type = 3;
		_printFloatString();
		return (1);
	}
	else if ((this->_data.compare("-inf") == 0) || (this->_data.compare("+inf") == 0)
		|| (this->_data.compare("nan") == 0))
	{
		_type = 4;
		_printDoubleString();
		return (1);
	}
	return (0);
}
int	ConvertClass::_checkChar(void)
{
	if ((_data.size() == 1) && isprint(_data[0]) && _data.find_first_of("0123456789f", 0) == std::string::npos)
	{
		_Char = _data[0];
		_Int = static_cast<int>(_Char);
		_Double = static_cast<float>(_Int);
		_Float = static_cast<float>(_Int);
		return (1);
	}
		return (0);
}

int	ConvertClass::_fillUpData(void)
{
	int res;

	if (_checkFloatLiteral())
		return (0);
	else if (_checkChar())
		return (1);
	else if ((res = _checkDigit())== INCORRECT_INPUT)
	{
		std::cerr << "The type conversion is impossible" << std::endl;
		return (0);
	}
	else
		return (res);
}

void	ConvertClass::printData(void)
{
	int res = _fillUpData();
	std::string flag = "";

	if (res == 0)
		return ;
	else if (res == INCORRECT_CHAR)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << _Char << "'" << std::endl;
	if (_Double == static_cast<int>(_Double))
		flag = ".0";
	std::cout << "int: " << _Int << std::endl;
	std::cout << "float: " << _Float << flag << "f" << std::endl;
	std::cout << "double: " << _Double << flag << std::endl;
}