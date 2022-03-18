#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	my_karen;
	int		i;

	if (argc != 2)
		std::cout << "Enter <level>" << std::endl;
	else
	{
		i = my_karen.index(argv[1]);
		switch (i)
		{
			case 0:
				my_karen.complain(i++);
			case 1:
				my_karen.complain(i++);
			case 2:
				my_karen.complain(i++);
			case 3:
				my_karen.complain(i++);
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" 
				<<std::endl;
		}
	}

	return (0);
}