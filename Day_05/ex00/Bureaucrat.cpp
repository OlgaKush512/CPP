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

std::ostream& operator << (std::ostream &out, const Bureaucrat &myBureaucrat)
{
	out << myBureaucrat.getName() << ", bureaucrat grade " << myBureaucrat.getGrade() << "." << std::endl;
	return (out);
}