#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen			my_karen;
	std::string		my_level;


	if (argc != 2)
		std::cout << "Enter <level>" << std::endl;
	else
	{
		my_level = (std::string)argv[1];
		my_karen.complain(argv[1]);
	}
	return (0);
}