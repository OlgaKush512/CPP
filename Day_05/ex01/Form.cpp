/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:07:21 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:07:23 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form(void) : _name(""), _gradeSign(0), _gradeExec(0)
{
	std::cout << "Default constructor of the class Form called, address :" << this << std::endl;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
	return ("Form::GradeTooHighException");
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return ("Form::GradeTooLowException");
}

Form::Form(std::string name, int gradeSign, int gradeExec) :  _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if ((gradeSign < 1) || (gradeExec < 1))
		throw Form::GradeTooHighException();
	if ((gradeSign > 150) || (gradeExec > 150))
		throw Form::GradeTooLowException();
	this->_signed = false;
	std::cout << "Parametric constructor of the class Form called, address :" << this << std::endl;
}

Form::Form(Form const &other) : _name(other._name), _gradeSign(other._gradeSign), _gradeExec(other._gradeExec)
{
	std::cout << "Copy constructor of the class Form called, address :" << this << std::endl;
	this->_signed = other._signed;
}

Form & Form::operator = (const Form &other)
{
	std::cout << "Copy assignment operator of the class Form called, address :" << this << std::endl;	
	this->_signed = other._signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor of the class Form called, address :" << this << std::endl;	
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

bool		Form::isSigned(void) const
{
	return (this->_signed);
}

void		Form::beSigned(const Bureaucrat &myBureaucrat)
{
	if (myBureaucrat.getGrade() <= this->_gradeSign)
	{
		if (this->_signed == true)
		{
			std::cout << "The form " << this->getName() << " can't be signed, because it is signed before." << std::endl;
			return ;
		}
		this->_signed = true;
		std::cout << myBureaucrat.getName() << " signed "<< this->getName() << std::endl;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator << (std::ostream &out, const Form &myForm)
{
	out << myForm.getName() << ", grade required to sign it:" << myForm.getGradeSign() << ","
	<< std::endl <<  "grade required to execute it:" << myForm.getGradeExec() << "."
	<< std::endl << "Signature: " << myForm.isSigned() << "." << std::endl;
	return (out);
}
