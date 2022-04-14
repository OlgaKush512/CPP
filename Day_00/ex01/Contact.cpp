/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:32:21 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/13 17:32:23 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_secret = "";

	std::cout << "Constructor of the class Contact called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor of the class Contact called" << std::endl;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_first_name);
}
std::string	Contact::getLastName(void) const
{
	return (this->_last_name);
}

std::string	Contact::getNickame(void) const
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phone_number);
}
std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}

void	Contact::setFirstName(void)
{
	do
	{
		std::cout << "Enter the first name: " << std::endl;
		std::getline(std::cin, _first_name);
	}while(_first_name.empty());
	
}

void	Contact::setLastName(void)
{
	do
	{
		std::cout << "Enter the last name: " << std::endl;
		std::getline(std::cin, _last_name);
	}while(_last_name.empty());
}

void	Contact::setNickame(void)
{
	do
	{
		std::cout << "Enter the nickname: " << std::endl;
		std::getline(std::cin, _nickname);
	}while(_nickname.empty());
}

void	Contact::setPhoneNumber(void)
{
	do
	{
		std::cout << "Enter the phone number: " << std::endl;
		std::getline(std::cin, _phone_number);
	}while(_phone_number.empty());
}

void	Contact::setSecret(void)
{
	do
	{
		std::cout << "Enter your the darkest secret: " << std::endl;
		std::getline(std::cin, _secret);
	}while(_secret.empty());
}
