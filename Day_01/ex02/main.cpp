#include <iostream>
#include <string>
#include <cctype>

int main(void)
{
	std::string	myString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &myString;
	std::string	&stringREF = myString;

	std::cout << "The adress of myString is " << &myString << std::endl;
	std::cout << "The adress stocked in stringPTR is " << stringPTR << std::endl;
	std::cout << "The adress stocked in stringREF is " << &stringREF << std::endl;

	std::cout << "The value of myString is " << myString << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;

	return (0);
}