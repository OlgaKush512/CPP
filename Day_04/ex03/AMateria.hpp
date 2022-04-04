#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria
{
	public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const &other);
	
	AMateria & operator = (const AMateria &other);

	virtual ~AMateria(void);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	protected:

	std::string _type;
};

#endif