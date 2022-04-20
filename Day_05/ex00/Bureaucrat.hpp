#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &other);
		Bureaucrat & operator = (const Bureaucrat &other);
		~Bureaucrat();

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);

	class GradeTooHighException : public std::exception
	{
		const char* what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char* what(void) const throw();
	};

	private:

	const std::string	_name;
	int					_grade;

	Bureaucrat(void);
};

std::ostream& operator << (std::ostream &out, const Bureaucrat &myBureaucrat);

#endif
