#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const &other);
		~Dog(void);

		Dog & operator = (const Dog &other);

	protected:

		void	makeSound(void) const;
		
	private:

		Brain* _myBrain;
};

#endif
