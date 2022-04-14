/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:33:02 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/13 17:33:05 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <string>
#include <iomanip>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook
{
	public:
		

		PhoneBook(void);
		~PhoneBook(void);

		void	add_user(void);
		void	search_user(void) const;

	private:

	static int	_koef;
	static int	_turn;

	Contact		_my_phone_book[8];
	void		_print_book(int i) const;
	void		_format_book(std::string str) const;
	void		_print_user(int i) const;
	int			_is_num(std::string str) const;
};

#endif
