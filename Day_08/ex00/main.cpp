# include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);


	std::cout << "my vector v stores " << int(v.size()) << " numbers.\n";
	std::vector<int>::iterator iter = easyfind(v, 20);

	std::cout << *iter << std::endl;
	try
	{
		iter = easyfind(v, 100);
		std::cout << *iter << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}