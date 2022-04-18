/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:11:40 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:11:42 by okushnir         ###   ########.fr       */
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
	~ClapTrap(void);

	ClapTrap & operator = (const ClapTrap &other);

	void attack(const std::string& target);
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
