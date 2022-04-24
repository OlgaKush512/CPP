#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <stack>
# include <exception>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void)
		{
			return (this->c.begin());
		}

		iterator begin(void) const
		{
			return (this->c.begin());
		}

		iterator rbegin(void)
		{
			return (this->c.rbegin());
		}

		iterator rbegin(void) const
		{
			return (this->c.rbegin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}

		iterator end(void) const
		{
			return (this->c.end());
		}

		iterator rend(void)
		{
			return (this->c.rend());
		}

		iterator rend(void) const
		{
			return (this->c.rend());
		}
	private:

};


#endif
