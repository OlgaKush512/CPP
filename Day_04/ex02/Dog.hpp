#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:

		Dog(void);
		Dog(Dog const &other);
		~Dog(void);

		Dog & operator = (const Dog &other);

		void	makeSound(void) const;
		
	private:

		Brain* _myBrain;
};

#endif
