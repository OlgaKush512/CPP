#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat br("Michel", 10);
		std::cout << br;
		try
		{
			ShrubberyCreationForm Sh("Forme_1", 40, 50);

			std::cout << Sh;
			// fr.beSigned(br);
			br.signForm(Sh);
			br.executeForm(Sh);
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