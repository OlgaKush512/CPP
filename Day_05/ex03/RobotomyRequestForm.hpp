#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		class RobotomyFailedException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;

	private:

		std::string	_target;
};

std::ostream& operator << (std::ostream &out, const RobotomyRequestForm &myRobotomyRequestForm);

#endif
