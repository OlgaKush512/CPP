#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class AAnimal
{
	public:

	AAnimal(void);
	AAnimal(AAnimal const &other);
	
	virtual ~AAnimal(void);

	AAnimal & operator = (const AAnimal &other);

	virtual void	makeSound(void) const = 0;
	virtual std::string		getType(void) const;

	protected:

	std::string type;
};

#endif
