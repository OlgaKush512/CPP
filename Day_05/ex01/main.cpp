#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Michel", 30);
		std::cout << br;
		try
		{
			Form fr("Forme1", 40, 50);
			std::cout << fr;
			fr.beSigned(br);
			fr.beSigned(br);
			br.signForm(fr);
		}
		catch(std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}