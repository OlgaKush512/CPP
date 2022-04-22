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
			for (unsigned int i = 0; i < n; i++)
				myArr[i] = 0;
		}

		Array(Array const &other)
		{
			this->myArr = new T[other.size()];
			this->_size = other.size();
			for (unsigned int i = 0; i < this->_size; i++)
				myArr[i] = 0;
			// return (*this);
			// (*this) = other;
		}
		Array & operator = (const Array &other)
		{
			delete [] this->myArr;
			this->myArr = new T[other.size()];
			this->_size = other.size();
			for (unsigned int i = 0; i < this->_size; i++)
				myArr[i] = 0;
			return (*this);
		}
		~Array() { delete [] this->myArr;}

		class IndexNotFound : public std::exception
		{
			virtual const char* what(void) const throw()
			{
				return ("Array::IndexNotFound");
			}
		};

		T &operator [] (unsigned int i) const
		{
			if (i < 0 || i >= this->size())
				throw  Array::IndexNotFound();
			return (this->myArr[i]);
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}

	private:

	unsigned int _size;
};

#endif
