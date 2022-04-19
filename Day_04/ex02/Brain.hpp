/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:58:14 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:58:16 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:

	std::string	ideas[100];
	
	Brain(void);
	Brain(Brain const &other);
	
	~Brain(void);

	Brain & operator = (const Brain &other);

};

#endif
