#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void) : _gradeSign(0), _gradeExec(0), _name("")
{
	std::cout << "Default constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
}

const char * RobotomyRequestForm::GradeTooHighException::what(void) const throw()
{
	return ("RobotomyRequestForm::GradeTooHighException");
}

const char * RobotomyRequestForm::GradeTooLowException::what(void) const throw()
{
	return ("RobotomyRequestForm::GradeTooLowException");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, int gradeSign, int gradeExec) : _gradeSign(gradeSign), _gradeExec(gradeExec), _target(target)
{
	if ((gradeSign < 1) || (gradeExec < 1))
		throw RobotomyRequestForm::GradeTooHighException();
	if ((gradeSign > 72) || (gradeExec > 45))
		throw RobotomyRequestForm::GradeTooLowException();
	this->_signed = false;
	// this->_name = Form::getName();
	std::cout << "Parametric constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : _gradeSign(other._gradeSign), _gradeExec(other._gradeExec), _target(other._target)
{
	std::cout << "Copy constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
	this->_signed = other._signed;
}
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
	std::cout << "Copy assignment operator of the class RobotomyRequestForm called, address :" << this << std::endl;	
	this->_signed = other._signed;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of the class RobotomyRequestForm called, address :" << this << std::endl;	
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if ((this->_signed == true) && (executor.getGrade() <= this->_gradeExec))
	{
		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr!" << std::endl;
		std::cout << this->_target << " has been robotomized successfully 50%% of the time." << std::endl;
	}
	else if (executor.getGrade() > this->_gradeExec)
	{
		throw RobotomyRequestForm::GradeTooLowException();
		std::cout << "The robotomy failed!" << std::endl;
	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << "because the form is not signed." << std::endl;
	}
}


std::ostream& operator << (std::ostream &out, const RobotomyRequestForm &myRobotomyRequestForm)
{
	out << myRobotomyRequestForm.getName() << ", grade required to sign it:" 
	<< myRobotomyRequestForm.getGradeSign() <<  ", grade required to execute it:"
	<< myRobotomyRequestForm.getGradeExec() << ", Target: " << myRobotomyRequestForm.getTarget()
	<< ". Signature: " << myRobotomyRequestForm.isSigned() << "." << std::endl;
	return (out);
}