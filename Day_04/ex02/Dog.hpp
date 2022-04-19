#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:

		Dog(void);
		Dog(Dog const &other);
		virtual ~Dog(void);

		Dog & operator = (const Dog &other);

		virtual void	makeSound(void) const;
		
	private:

		Brain* _myBrain;
};

#endif
