#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:

	Cat(void);
	Cat(Cat const &other);
	virtual ~Cat(void);

	Cat & operator = (const Cat &other);

	virtual void	makeSound(void) const;
};

#endif
