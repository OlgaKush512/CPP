/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:15:12 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:15:16 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <string>
# include <cmath>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(std::string name);

	FragTrap(FragTrap const &other);
	~FragTrap(void);

	FragTrap & operator = (const FragTrap &other);

	void highFivesGuys(void);
};

#endif
