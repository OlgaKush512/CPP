#include "Karen.hpp"

Karen::Karen(void)
{
	return;
}

Karen::~Karen(void)
{
	return;
}

void	Karen::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;	
}

void Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You did not put enough bacon in my burger ! If you did, I would nott be asking for more !" << std::endl;
}

void Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	
}