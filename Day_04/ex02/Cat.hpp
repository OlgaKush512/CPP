#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:

		Cat(void);
		Cat(Cat const &other);
		virtual ~Cat(void);

		Cat & operator = (const Cat &other);

		virtual void	makeSound(void) const;

	private:

		Brain* _myBrain;
};

#endif
