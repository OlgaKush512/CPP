#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void) : _gradeSign(0), _gradeExec(0), _name("")
{
	std::cout << "Default constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
}

const char * PresidentialPardonForm::GradeTooHighException::what(void) const throw()
{
	return ("PresidentialPardonForm::GradeTooHighException");
}

const char * PresidentialPardonForm::GradeTooLowException::what(void) const throw()
{
	return ("PresidentialPardonForm::GradeTooLowException");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, int gradeSign, int gradeExec) : _gradeSign(gradeSign), _gradeExec(gradeExec), _target(target)
{
	if ((gradeSign < 1) || (gradeExec < 1))
		throw PresidentialPardonForm::GradeTooHighException();
	if ((gradeSign > 25) || (gradeExec > 5))
		throw PresidentialPardonForm::GradeTooLowException();
	this->_signed = false;
	std::cout << "Parametric constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : _gradeSign(other._gradeSign), _gradeExec(other._gradeExec), _target(other._target)
{
	std::cout << "Copy constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
	this->_signed = other._signed;
}
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
	std::cout << "Copy assignment operator of the class PresidentialPardonForm called, address :" << this << std::endl;	
	this->_signed = other._signed;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Destructor of the class PresidentialPardonForm called, address :" << this << std::endl;	
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if ((this->_signed == true) && (executor.getGrade() <= this->_gradeExec))
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else if (executor.getGrade() > this->_gradeExec)
	{
		throw PresidentialPardonForm::GradeTooLowException();
		std::cout << this->_target << " has not been pardoned by Zaphod Beeblebrox." << std::endl;

	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << "because the form is not signed." << std::endl;
	}
}


std::ostream& operator << (std::ostream &out, const PresidentialPardonForm &myPresidentialPardonForm)
{
	out << myPresidentialPardonForm.getName() << ", grade required to sign it:" 
	<< myPresidentialPardonForm.getGradeSign() <<  ", grade required to execute it:"
	<< myPresidentialPardonForm.getGradeExec() << ", Target: " << myPresidentialPardonForm.getTarget()
	<< ". Signature: " << myPresidentialPardonForm.isSigned() << "." << std::endl;
	return (out);
}