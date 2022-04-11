#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
	public:

		T *myArr;

		Array(void) : myArr(new T[0]), _size(0) {}
		Array(const unsigned int n) : myArr(new T[n]), _size(n)
		{
			for (int i = 0; i < n; i++)
				myArr[i] = 0;
		}

		Array(Array const &other) : myArr(new T[other._size]), _size(other._size) {}
		// Array & operator = (const Array &other) : myArr(new T[other._size]), _size(other._size) {}
		~Array() { delete [] this->myArr;}

		int	size(void) const
		{
			return (this->_size);
		}

	private:

	unsigned int _size;
};

#endif
