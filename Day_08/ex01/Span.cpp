
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
	srand(time(NULL));
	std::vector<int> v(_size -_myVector.size());
	
	std::generate(v.begin(), v.end(), rand);
	std::vector<int> temp(v.begin(), v.end());

	if (temp.size() > (_size -_myVector.size()))
		throw ErrorAddNewElement();
	copy(temp.begin(), temp.end(), std::back_inserter(_myVector));
}

void	Span::printSpan(void) const
{
	for (size_t i = 0; i < _size; i++)
		std::cout << this->_myVector[i] << std::endl;
}
