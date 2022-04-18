/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:14:35 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:14:37 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

	DiamondTrap(void);
	DiamondTrap(std::string name);

	DiamondTrap(DiamondTrap const &other);
	DiamondTrap & operator = (const DiamondTrap &other);
	~DiamondTrap(void);

	void attack(const std::string& target);
	void whoAmI(void);
	void getValues(void);

	private:

	std::string	_name;
};

#endif
