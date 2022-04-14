/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:32:50 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/13 17:32:54 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor of the class PhoneBook called" << std::endl;
	_koef = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructor of the class PhoneBook called" << std::endl;
}

void	PhoneBook::add_user(void)
{
	int j;
	
	if (_koef >= 8)
	{
		j = 0 + _turn++;
		if (_turn >= 8)
			_turn = 0;
	}
	else
		j = _koef;
	_my_phone_book[j].setFirstName();
	_my_phone_book[j].setLastName();
	_my_phone_book[j].setNickame();
	_my_phone_book[j].setPhoneNumber();
	_my_phone_book[j].setSecret();

	_koef += 1;
	
}

void	PhoneBook::_print_book(int i) const
{
	char ind = i + 49;
	std::string res(1, ind);
	_format_book(res);
	_format_book(_my_phone_book[i].getFirstName());
	_format_book(_my_phone_book[i].getLastName());
	_format_book(_my_phone_book[i].getNickame());
	std::cout << std::endl;
}

void	PhoneBook::_format_book(std::string str) const
{
	int j;

	if (str.length() >= 10)
	{
		j = -1;
		while (++j < 9)
			std::cout << str[j];
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
		std::cout << "|";
	}
}

void	PhoneBook::_print_user(int i) const
{
	i = i - 1;
	if (i >= 0 && i < 8)
	{
		std::cout << _my_phone_book[i].getFirstName() << std::endl;
		std::cout << _my_phone_book[i].getLastName() << std::endl;
		std::cout << _my_phone_book[i].getNickame() << std::endl;
		std::cout << _my_phone_book[i].getPhoneNumber() << std::endl;
		std::cout << _my_phone_book[i].getSecret() << std::endl;
	}
	else
		std::cout << "Index must be a number from 1 to 8." << std::endl;
}

int	PhoneBook::_is_num(std::string str) const
{
	int i;
	i = 0;
	while (str[i])
	{
		if (isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

void	PhoneBook::search_user(void) const
{
	int i;
	int convert;
	std:: string selected;

	i = 0;
	while (i < 8)
	{
		_print_book(i);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter the index of user: ";
	std::getline(std::cin, selected);
	if (_is_num(selected))
	{
		convert = atoi(selected.c_str());
		_print_user(convert);
	}
	else
		std::cout << "Index must be a number from 1 to 8." << std::endl;
}

int	PhoneBook::_koef = 0;
int	PhoneBook::_turn = 0;

