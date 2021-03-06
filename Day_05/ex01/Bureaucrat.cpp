/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:07:11 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:07:12 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(void) : _name("NoName"), _grade(0)
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

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
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

void	Bureaucrat::incrementGrade(void)
{
	if ((this->_grade - 1) < 1)
	{
		std::cout << "It is impossible to increment the grade!" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= 1;
	std::cout << "Now, the grade of the Bureaucrat " << this->_name
	<< " is incremented. His grade : " << this->_grade << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	if ((this->_grade + 1) > 150)
	{
		std::cout << "It is impossible to decrement the grade!" << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade += 1;
	std::cout << "Now, the grade of the Bureaucrat " << this->_name
	<< " is decremented. His grade : " << this->_grade << std::endl;
}


void Bureaucrat::signForm(Form &myForm)
{
	if (myForm.isSigned())
		std::cout << this->getName() << " couldn???t sign "<< myForm.getName() << " because the form is signed before." << std::endl;	
	else
	{
		try
		{
			myForm.beSigned(*this);
			std::cout << this->getName() << " signed "<< myForm.getName() << std::endl;	
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << this->getName() << " couldn???t sign "<< myForm.getName() << " because bureaucrat???s grade is too low" << std::endl;	
		}
	}
}

std::ostream& operator << (std::ostream &out, const Bureaucrat &myBureaucrat)
{
	out << myBureaucrat.getName() << ", bureaucrat grade " << myBureaucrat.getGrade() << "." << std::endl;
	return (out);
}
