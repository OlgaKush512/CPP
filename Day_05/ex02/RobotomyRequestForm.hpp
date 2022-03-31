#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target, int gradeSign, int gradeExec);
		RobotomyRequestForm(RobotomyRequestForm const &other);
		RobotomyRequestForm & operator = (const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		class GradeTooHighException : public std::exception
		{
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what(void) const throw();
		};

		void		execute(Bureaucrat const & executor) const;

		std::string	getTarget(void) const;

	private:

		const std::string	_target;

		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;

};

std::ostream& operator << (std::ostream &out, const RobotomyRequestForm &myRobotomyRequestForm);

#endif
