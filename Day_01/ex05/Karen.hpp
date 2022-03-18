#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>
#include <cctype>

class Karen
{
	public:
		
		std::string	levels[4];
		void (*pfn_MyFunc[4])(void);

		Karen(void);
		~Karen(void);

		void complain(std::string level);
		
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
};

#endif
