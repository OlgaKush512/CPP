#include "Karen.hpp"

Karen::Karen(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	this->myArr[0] = &Karen::_debug;
	this->myArr[1] = &Karen::_info;
	this->myArr[2] = &Karen::_warning;
	this->myArr[3] = &Karen::_error;
	return ;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::_debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
}

void Karen::_info(void)
{
	std::cout << INFO_MSG << std::endl;
}

void Karen::_warning(void)
{
	std::cout << WARNING_MSG << std::endl;
}

void Karen::_error(void)
{
	std::cout << ERROR_MSG << std::endl;
}

int Karen::index(std::string level)
{
	int	i;

	i = 0;
	while ((levels[i].compare(level) != 0) && i < 4)
		i++;
	return (i);
}

void Karen::complain(int i)
{
	std::string	level;

	level = levels[i];
	std::cout << "[ " << level << " ]" << std::endl;
	(this->*myArr[i])();
	std::cout << std::endl;
}
