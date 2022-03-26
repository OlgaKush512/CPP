#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:

		Cat(void);
		Cat(Cat const &other);
		~Cat(void);

		Cat & operator = (const Cat &other);

		void	makeSound(void) const;

	private:

		Brain* _myBrain;
};

#endif