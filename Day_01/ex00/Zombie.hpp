/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:19:55 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:19:58 by okushnir         ###   ########.fr       */
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

		void	announce(void);

	private:

		std::string    _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
