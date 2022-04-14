/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:32:31 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/13 17:32:33 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <cctype>
#include <iostream>

class Contact
{
	public:

		typedef void (Contact::*MyFuncArr) (void);
		MyFuncArr	myArrSet[5];
		
		Contact(void);
		~Contact(void);

		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickame(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getSecret(void) const;

		void	setFirstName(void);
		void	setLastName(void);
		void	setNickame(void);
		void	setPhoneNumber(void);
		void	setSecret(void);

	private:

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;

};

#endif
