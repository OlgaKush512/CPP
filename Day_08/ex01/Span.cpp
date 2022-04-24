
#include "Span.hpp"


Span::Span(void) : _size(0), _myVector(0)
{
	return ;
}

const char * Span::ErrorAddNewElement::what(void) const throw()
{
	return ("Span::ErrorAddNewElement");
}

const char * Span::ErrorDistanceNotFound::what(void) const throw()
{
	return ("Span::ErrorDistanceNotFound");
}

Span::Span(unsigned int n) : _size(n), _myVector(0)
{
	return ;
}

Span::Span(Span const &other)
{
	*this = other;
}
Span & Span::operator = (const Span &other)
{
	this->_size = other._size;
	this->_myVector = other._myVector;
	return (*this);
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int element)
{
	if (_myVector.size() < _size)
		_myVector.push_back(element);
	else
		throw ErrorAddNewElement();
}

int	Span::shortestSpan(void)
{
	std::vector<int>	tmp(_myVector.size() - 1);
	
	for (size_t i = 0; i < (_myVector.size() - 1); i++)
		tmp[i] = abs(_myVector[i + 1] - _myVector[i]);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[0]);
}

int	Span::longestSpan(void) const
{
	std::vector<int>	tmp(_myVector.size() - 1);
	
	for (size_t i = 0; i < (_myVector.size() - 1); i++)
		tmp[i] = _myVector[i + 1] - _myVector[i];
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1]);
}

void	Span::addAll(void)
{
	int res;
	srand(time(NULL));

	for (size_t i = 0; i < _size; i++)
	{
		res = (_size * -1) + rand() % (_size - (_size * -1)  + 1);
		addNumber(res);
	}
}

void	Span::printSpan(void) const
{
	for (size_t i = 0; i < _size; i++)
		std::cout << _getElement(i) << std::endl;
}

int	Span::_getElement(unsigned int i) const
{
	return (this->_myVector[i]);
}
