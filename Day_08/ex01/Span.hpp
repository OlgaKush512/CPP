
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

class Span
{
	public:

		Span(unsigned int n);
		Span(Span const &other);
		Span & operator = (const Span &other);
		~Span();

	void			addNumber(int element);
	void			addAll(void);
	int				shortestSpan(void);
	int				longestSpan(void) const;
	void			printSpan(void) const;


	class ErrorAddNewElement: public std::exception
	{
		const char* what(void) const throw();
	};

	class ErrorDistanceNotFound : public std::exception
	{
		const char* what(void) const throw();
	};

	private:

	unsigned int		_size;
	std::vector<int>	_myVector;

	int					_getElement(unsigned int i) const;

	Span(void);
};

std::ostream& operator << (std::ostream &out, const Span &mySpan);

#endif
