#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>

class Zombie
{
	public:
		
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);
		void changeName(std::string name);

	private:

		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif