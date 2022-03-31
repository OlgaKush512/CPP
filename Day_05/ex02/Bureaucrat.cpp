#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default constructor of the class Bureaucrat called, address :" << this << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	this->_name = name;
	std::cout << "Parametric constructor of the class Bureaucrat called, address :" << this << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
{
	std::cout << "Copy constructor of the class Bureaucrat called, address :" << this << std::endl;
	*this = other;
}
Bureaucrat & Bureaucrat::operator = (const Bureaucrat &other)
{
	std::cout << "Copy assignment operator of the class Bureaucrat called, address :" << this << std::endl;	
	this->_name = other._name ;
	this->_grade = other._grade ;

	return (*this);
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructer of the class Bureaucrat called, address :" << this << std::endl;	
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::signForm(Form &myForm)
{
	if (myForm.isSigned())
		std::cout << this->getName() << " couldn’t sign the form because the form is signed before." << std::endl;	
	else
	{
		try
		{
			myForm.beSigned(*this);
			std::cout << this->getName() << " signed the form." << std::endl;	
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << this->getName() << " couldn’t sign the form because bureaucrat’s grade is too low" << std::endl;	
		}
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (!form.isSigned())
	{
		std::cout << this->getName() << " couldn’t execute "<< form.getName() << "because the form is not signed." << std::endl;
	}
	else
	{
		try
		{
			form.execute(*this);
			std::cout << this->getName() << " signed "<< form.getName() << std::endl;	
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << this->getName() << " couldn’t sign "<< form.getName() << "because bureaucrat’s grade is too low" << std::endl;	
		}
	}
}

std::ostream& operator << (std::ostream &out, const Bureaucrat &myBureaucrat)
{
	out << myBureaucrat.getName() << ", bureaucrat grade " << myBureaucrat.getGrade() << "." << std::endl;
	return (out);
}