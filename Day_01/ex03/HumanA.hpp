/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:25:29 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/14 18:25:33 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name,Weapon &theWeapon);
		~HumanA(void);

		void attack(void);

	private:
		std::string	_myName;
		Weapon		&_myWeapon;

};

#endif
