#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(Intern const &other);
		Intern & operator = (const Intern &other);
		~Intern();

	Form	*makeForm(std::string name, std::string target);
	
	class GradeTooHighException : public std::exception
	{
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what(void) const throw();
	};

	private:

	std::string	_forms[3];

	typedef Form* (Intern::*MyFuncArr) (std::string);
	MyFuncArr	myArr[3];

	Form	*_createRobotomy(std::string target);
	Form	*_createShrubbery(std::string target);
	Form	*_createPresidentialPardon(std::string target);

};

#endif
