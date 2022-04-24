#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

class CantFind : public std::exception
{
	public:

	CantFind(std::string message) : _message(message) {};
	const char* what(void) const throw()
	{
		return (_message.c_str());
	}
	~CantFind(void)throw(){};

	private:
	
	std::string	_message;
};

template <typename T>
typename T::iterator easyfind(T &v, int myInt)
{
	typename T::iterator it = std::find(v.begin(), v.end(), myInt);

	if (it == v.end())
		throw CantFind("The element is not found!");
	return (it);
}


#endif
