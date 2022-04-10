#include "ConvertClass.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cerr << "Entre some char, int, float or double" << std::endl;
	else
	{
		ConvertClass MyData(argv[1]);
		MyData.printData();
	}
	return (0);
}