#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Michel", 30);
		std::cout << br;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}