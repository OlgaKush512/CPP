#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "Parametric constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form("RobotomyRequestForm", 72, 45)
{
	this->_target = other._target;
	std::cout << "Copy constructor of the class RobotomyRequestForm called, address :" << this << std::endl;
}
RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
	std::cout << "Copy assignment operator of the class RobotomyRequestForm called, address :" << this << std::endl;	
	this->_target = other._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor of the class RobotomyRequestForm called, address :" << this << std::endl;	
}


const char * RobotomyRequestForm::RobotomyFailedException::what(void) const throw()
{
	return ("RobotomyRequestForm::RobotomyFailedException");
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if ((isSigned() == true) && (executor.getGrade() <= 45))
	{
		std::cout << "Brrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr!" << std::endl;
		srand(time(NULL));
		int res = rand() % 2;
		if (res == 0)
			std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
		else
		{
			std::cout << "The robotomy failed!" << std::endl;
			throw RobotomyRequestForm::RobotomyFailedException();
		}
	}
	else if (executor.getGrade() > 45)
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << " because his grade is too low." << std::endl;
		throw RobotomyRequestForm::GradeTooLowException();
	}
	else
	{
		std::cout << executor.getName() << " couldn’t execute "<< this->_target << " because the form is not signed." << std::endl;
		throw RobotomyRequestForm::NotSignedYetException();
	}
}


std::ostream& operator << (std::ostream &out, const RobotomyRequestForm &myRobotomyRequestForm)
{
	out << "Name: " << myRobotomyRequestForm.getName() << std::endl
	<< "Grade required to sign it: " << myRobotomyRequestForm.getGradeSign() << std::endl 
	<< "Grade required to execute it: " << myRobotomyRequestForm.getGradeExec() << std::endl
	<< "Target: " << myRobotomyRequestForm.getTarget() << std::endl
	<< "Signature: " << myRobotomyRequestForm.isSigned() << "." << std::endl;
	return (out);
}