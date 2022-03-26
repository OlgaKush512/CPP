#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:

	Cure(void);
	Cure(std::string const & type);
	Cure(Cure const &other);
	
	~Cure(void);

	Cure & operator = (const Cure &other);

	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);

	private:

	std::string _type;
};

#endif
