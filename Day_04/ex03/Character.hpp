#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:

		Character(void);
		Character(std::string const & type);
		Character(Character const &other);
		Character & operator = (const Character &other);
		
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);

	private:

	std::string _name;
};

#endif
