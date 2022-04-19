#ifndef WRONG_WrongCAT_HPP
# define WRONG_WrongCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

	WrongCat(void);
	WrongCat(WrongCat const &other);
	virtual ~WrongCat(void);

	WrongCat & operator = (const WrongCat &other);

	void	makeSound(void) const;
};

#endif
