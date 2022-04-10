# include <iostream>
# include <string>
# include <exception>
#include <fstream>
#include <sstream>

int main(void)
{
	char a = (char)32;
	char b = (char)127;
	char c = (char)387;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	return (0);
}