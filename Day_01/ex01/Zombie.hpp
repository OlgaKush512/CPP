/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:20:38 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:20:42 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
