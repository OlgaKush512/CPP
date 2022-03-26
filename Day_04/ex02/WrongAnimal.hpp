#ifndef WRONG_WrongANIMAL_HPP
# define WRONG_WrongANIMAL_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class WrongAnimal
{
	public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &other);
	
	virtual ~WrongAnimal(void);

	WrongAnimal & operator = (const WrongAnimal &other);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

	protected:

	std::string type;
};

#endif
