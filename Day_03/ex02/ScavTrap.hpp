/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:13:58 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:14:00 by okushnir         ###   ########.fr       */
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
