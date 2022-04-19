/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:28:46 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 12:28:50 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap(void);
	ScavTrap(std::string name);

	ScavTrap(ScavTrap const &other);
	virtual ~ScavTrap(void);

	ScavTrap & operator = (const ScavTrap &other);

	virtual void attack(const std::string& target);
	void guardGate(void);
};

#endif
