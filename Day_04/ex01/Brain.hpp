#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:

	std::string	ideas[100];
	
	Brain(void);
	Brain(Brain const &other);
	
	~Brain(void);

	Brain & operator = (const Brain &other);

};

#endif
