#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>
#include <cctype>

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR_MSG "This is unacceptable ! I want to speak to the manager now."

class Karen
{
	public:
		
		std::string	levels[4];
		typedef void (Karen::*MyFuncArr) (void);
		MyFuncArr	myArr[4];

		Karen(void);
		~Karen(void);

		void complain(int i);
		int index(std::string level);
		
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
};

#endif
