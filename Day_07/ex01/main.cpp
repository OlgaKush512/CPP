# include "iter.hpp"

void	printValue(int x)
{
	std::cout << x << std::endl;
}

int main( void ) 
{
	int a[] = {2, 3, 7, 10};

	void	(*f)(int);
	f = &printValue;
	iter(a, 4, f);
	return (0);
}