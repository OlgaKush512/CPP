/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:32:40 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/13 17:32:43 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string  commande;
	PhoneBook	my_phone_book;

	commande = "";
	
	while (commande.compare("EXIT") != 0)
	{
		std::cout << "Enter the command : ";
		std::getline (std::cin,commande);
		if (commande.compare("ADD") == 0)
			my_phone_book.add_user();
		else if (commande.compare("SEARCH") == 0)
			my_phone_book.search_user();
		else if (commande.compare("EXIT") != 0)
			std::cout << "Error: command is incorrect. Possible commands: ADD, SEARCH, EXIT." << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
