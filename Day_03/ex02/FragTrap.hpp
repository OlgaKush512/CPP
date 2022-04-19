/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 19:13:35 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/18 19:13:36 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap(void);
	FragTrap(std::string name);

	FragTrap(FragTrap const &other);
	virtual ~FragTrap(void);

	FragTrap & operator = (const FragTrap &other);

	void highFivesGuys(void);
};

#endif
