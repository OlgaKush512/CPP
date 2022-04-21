/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:25:56 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 20:25:58 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>

class Base
{
	public:

		virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif
