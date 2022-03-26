#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice(void);
	Ice(std::string const & type);
	Ice(Ice const &other);
	
	~Ice(void);

	Ice & operator = (const Ice &other);

	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);

	private:

	std::string _type;
};

#endif
