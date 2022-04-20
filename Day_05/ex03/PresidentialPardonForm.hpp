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
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		void		execute(Bureaucrat const & executor) const;
		std::string	getTarget(void) const;

	private:

		std::string	_target;
};

std::ostream& operator << (std::ostream &out, const PresidentialPardonForm &myPresidentialPardonForm);

#endif
