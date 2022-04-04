#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "target_name";
	std::cout << "Default constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "Parametric constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = other._target;
	std::cout << "Copy constructor of the class PresidentialPardonForm called, address :" << this << std::endl;
}
PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
	std::cout << "Copy assignment operator of the class PresidentialPardonForm called, address :" << this << std::endl;	
	this->_target = other._target;
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
	if ((isSigned() == true) && (executor.getGrade() <= 5))
	{
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else if (executor.getGrade() > 5)
	{
		throw PresidentialPardonForm::GradeTooLowException();
		std::cout << this->_target << " has not been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << " because the form is not signed." << std::endl;
	}
}


std::ostream& operator << (std::ostream &out, const PresidentialPardonForm &myPresidentialPardonForm)
{
	out << "Name: " << myPresidentialPardonForm.getName() << std::endl
	<< "Grade required to sign it: " << myPresidentialPardonForm.getGradeSign() << std::endl 
	<< "Grade required to execute it: " << myPresidentialPardonForm.getGradeExec() << std::endl
	<< "Target: " << myPresidentialPardonForm.getTarget() << std::endl
	<< "Signature: " << myPresidentialPardonForm.isSigned() << "." << std::endl;
	return (out);
}
