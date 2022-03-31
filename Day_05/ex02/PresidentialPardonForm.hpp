#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target, int gradeSign, int gradeExec);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &other);
		~PresidentialPardonForm();

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

std::ostream& operator << (std::ostream &out, const PresidentialPardonForm &myPresidentialPardonForm);

#endif
