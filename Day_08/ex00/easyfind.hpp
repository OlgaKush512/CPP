#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <map>
# include <vector>
# include <list>

template <typename T>
std::vector<int>::iterator easyfind(T x, int myInt)
{
	std::vector<int>::iterator it;
	try
	{
		it = find(T.begin(), T.end(), myInt);
		return (it);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

template <typename T>
T const min(T const &x, T const &y)
{
	return (y <= x ? y : x);
}

template <typename T>
T const max(T const &x, T const &y)
{
	return (y >= x ? y : x);
}

#endif
