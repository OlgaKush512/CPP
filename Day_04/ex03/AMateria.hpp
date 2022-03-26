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
	
	virtual ~AMateria(void);

	AMateria & operator = (const AMateria &other);

	virtual std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	private:

	std::string _type;
};

#endif
