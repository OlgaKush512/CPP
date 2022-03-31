#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(void) : _gradeSign(0), _gradeExec(0), _name("")
{
	std::cout << "Default constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
}

const char * ShrubberyCreationForm::GradeTooHighException::what(void) const throw()
{
	return ("ShrubberyCreationForm::GradeTooHighException");
}

const char * ShrubberyCreationForm::GradeTooLowException::what(void) const throw()
{
	return ("ShrubberyCreationForm::GradeTooLowException");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, int gradeSign, int gradeExec) : _gradeSign(gradeSign), _gradeExec(gradeExec), _target(target)
{
	if ((gradeSign < 1) || (gradeExec < 1))
		throw ShrubberyCreationForm::GradeTooHighException();
	if ((gradeSign > 145) || (gradeExec > 137))
		throw ShrubberyCreationForm::GradeTooLowException();
	this->_signed = false;
	// this->_name = Form::getName();
	std::cout << "Parametric constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : _gradeSign(other._gradeSign), _gradeExec(other._gradeExec), _target(other._target)
{
	std::cout << "Copy constructor of the class ShrubberyCreationForm called, address :" << this << std::endl;
	this->_signed = other._signed;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	std::cout << "Copy assignment operator of the class ShrubberyCreationForm called, address :" << this << std::endl;	
	this->_signed = other._signed;
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
	if ((this->_signed == true) && (executor.getGrade() <= this->_gradeExec))
	{
		try
		{
			fout.open(path);
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
	else if (executor.getGrade() > this->_gradeExec)
	{
		throw ShrubberyCreationForm::GradeTooLowException();
		std::cout << this->_target << "_shrubbery file is not created because the grade of " << executor.getName() << " is not signed." << std::endl;
	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << "because the form is not signed." << std::endl;
	}
}

std::ostream& operator << (std::ostream &out, const ShrubberyCreationForm &myShrubberyCreationForm)
{
	out << myShrubberyCreationForm.getTarget() << ", grade required to sign it:"
	<< myShrubberyCreationForm.getGradeSign() << std::endl 
	<< "grade required to execute it:" << myShrubberyCreationForm.getGradeExec() << std::endl
	<< "Target: " << myShrubberyCreationForm.getTarget() << std::endl
	<< "Signature: " << myShrubberyCreationForm.isSigned() << "." << std::endl;
	return (out);
}