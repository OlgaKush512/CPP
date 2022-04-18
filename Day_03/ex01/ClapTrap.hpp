/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 23:02:55 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 23:02:57 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:

	ClapTrap(void);
	ClapTrap(std::string name);

	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap(void);

	ClapTrap & operator = (const ClapTrap &other);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	protected:

	std::string _name;
	int	_hitPoints;
	int _energyPoints;
	int _attackDamage;

	bool	_notAction(void);
};

#endif
