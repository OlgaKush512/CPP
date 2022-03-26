#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

	Cat(void);
	Cat(Cat const &other);
	~Cat(void);

	Cat & operator = (const Cat &other);

	protected:

	void	makeSound(void) const;
};

#endif
