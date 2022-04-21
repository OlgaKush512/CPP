/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:11:23 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 18:11:26 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "target_name";
	std::cout << "Default constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "Parametric constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Copy constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
	this->_target = other._target;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	std::cout << "Copy assignment operator of the class ShrubberyCreationForm called, address :" << this << std::endl;	
	this->_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor of the class ShrubberyCreationForm called, address :" << this << std::endl;	
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	fout;
	std::string 	path;

	path = this->_target + "_shrubbery";
	if ((isSigned() == true) && (executor.getGrade() <= 137))
	{
		try
		{
			fout.open(path.c_str());
			fout << TREE;
			fout.close();
			std::cout << this->_target << "_shrubbery file is created in the working directory." << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << this->_target << "_shrubbery file is not created." << std::endl;
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	else if (executor.getGrade() > 137)
	{
		std::cout << this->_target << "_shrubbery file is not created because the grade of " << executor.getName() << " is too low." << std::endl;
		throw ShrubberyCreationForm::GradeTooLowException();
	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << " because the form is not signed." << std::endl;
		throw ShrubberyCreationForm::NotSignedYetException();
	}
}

std::ostream& operator << (std::ostream &out, const ShrubberyCreationForm &myShrubberyCreationForm)
{
	out << "Name: " << myShrubberyCreationForm.getName() << std::endl
	<< "Grade required to sign it: " << myShrubberyCreationForm.getGradeSign() << std::endl 
	<< "Grade required to execute it: " << myShrubberyCreationForm.getGradeExec() << std::endl
	<< "Target: " << myShrubberyCreationForm.getTarget() << std::endl
	<< "Signature: " << myShrubberyCreationForm.isSigned() << "." << std::endl;
	return (out);
}
