/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:10:09 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:10:11 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	this->_forms[0] = "robotomy request";
	this->_forms[1] = "shrubbery creation";
	this->_forms[2] = "presidential pardon";

	this->myArr[0] = &Intern::_createRobotomy;
	this->myArr[1] = &Intern::_createShrubbery;
	this->myArr[2] = &Intern::_createPresidentialPardon;
	std::cout << "Default constructor of the class Intern called, address :" << this << std::endl;
	return ;
}

const char * Intern::GradeTooHighException::what(void) const throw()
{
	return ("Intern::GradeTooHighException");
}

const char * Intern::GradeTooLowException::what(void) const throw()
{
	return ("Intern::GradeTooLowException");
}

Intern::Intern(Intern const &other)
{
	std::cout << "Copy constructor of the class Intern called, address :" << this << std::endl;
	*this = other;
}

Intern & Intern::operator = (const Intern &other)
{
	(void)other;
	std::cout << "Copy assignment operator of the class Intern called, address :" << this << std::endl;	
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Destructer of the class Intern called, address :" << this << std::endl;	
}

Form *Intern::makeForm(std::string name, std::string target)
{
	int	i;

	i = 0;
	while ((_forms[i].compare(name) != 0) && i < 3)
		i++;
	if (i >= 3)
	{
		std::cerr << "Error: it is not possible to create the form because the form " << name << " doesn't exist." << std::endl;
		return (NULL);
	}
	return (this->*myArr[i])(target);
}

Form	*Intern::_createRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_createPresidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}
