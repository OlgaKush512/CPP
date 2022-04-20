#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern my_intern;

	Form *newForm;

	newForm = my_intern.makeForm("request", "Bender");

	if (newForm != NULL)
	{
		std::cout << *newForm << std::endl;
		try
		{
			Bureaucrat br("Michel", 10);
			std::cout << br;
			
			br.signForm(*newForm);
			br.signForm(*newForm);
			br.executeForm(*newForm);
		}
		catch(std::exception & e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
		}
		delete (newForm);
	}
	return (0);
}