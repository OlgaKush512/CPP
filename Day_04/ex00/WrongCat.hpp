#ifndef WRONG_WrongCAT_HPP
# define WRONG_WrongCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(WrongCat const &other);
	~WrongCat(void);

	WrongCat & operator = (const WrongCat &other);

	protected:

	void	makeSound(void) const;
};

#endif
