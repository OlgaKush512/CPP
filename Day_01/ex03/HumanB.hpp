/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:25:48 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:25:50 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB(std::string theName);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon &theWeapon);

	private:
		std::string	_myName;
		Weapon		*_myWeapon;

};

#endif
