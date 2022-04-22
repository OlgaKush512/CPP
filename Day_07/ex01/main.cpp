# include "iter.hpp"

void	printValue(int x)
{
	x++;
	std::cout << x << std::endl;
}

int main( void ) 
{
	int a[] = {2, 3, 7, 10};

	void	(*f)(int);
	f = &printValue;
	iter(a, 4, f);

	for (int i = 0; i < 4; i++)
		std::cout << a[i] << std::endl;
	return (0);
}
