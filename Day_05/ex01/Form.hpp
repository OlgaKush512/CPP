#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

#include "Bureaucrat.hpp"

class Form
{
	public:

		Form(void);
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &other);
		Form & operator = (const Form &other);
		~Form();

		class GradeTooHighException : public std::exception
		{
			const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char* what(void) const throw();
		};

		void		beSigned(const Bureaucrat &myBureaucrat);
		std::string	getName(void) const;
		int			getGradeSign(void) const;
		int			getGradeExec(void) const;
		bool		isSigned(void) const;

	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeSign;
		const int			_gradeExec;

};

std::ostream& operator << (std::ostream &out, const Form &myForm);

#endif
