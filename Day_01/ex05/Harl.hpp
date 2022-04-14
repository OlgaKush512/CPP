/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:27:33 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:27:36 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>
#include <cctype>

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
#define ERROR_MSG "This is unacceptable ! I want to speak to the manager now."

class Harl
{
	public:
		
		std::string	levels[4];
		typedef void (Harl::*MyFuncArr) (void);
		MyFuncArr	myArr[4];

		Harl(void);
		~Harl(void);

		void complain(std::string level);
		
	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
};

#endif
