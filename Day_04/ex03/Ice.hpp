#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice(void);
	Ice(Ice const &other);
	
	~Ice(void);

	Ice & operator = (const Ice &other);

	Ice* clone() const;
	void use(ICharacter& target);

};

#endif
