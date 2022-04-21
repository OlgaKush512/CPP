/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:25:18 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 20:25:21 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data myData = { 15, 'c', 0.42f, 0.42};
	uintptr_t	myDataPtr;

	myDataPtr = serialize(&myData);
	std::cout << "The value of &myData by itself is "
	<< std::showbase << std::hex << &myData << std::endl;

	std::cout << "The value of &myData by myDataPtr is "
	<< std::showbase << std::hex << myDataPtr << std::endl;

	Data *myDataPtrNew = deserialize(myDataPtr);
	std::cout << "The value of &myDataPtr by itself is "
	<< std::showbase << std::hex << myDataPtr << std::endl;

	std::cout << "The value of &myDataPtr by myDataPtrNew is "
	<< std::showbase << std::hex << myDataPtrNew << std::endl;

	std::cout << std::endl << "More ..." << std::endl << std::endl;

	std::cout << "myData structure" << std::endl;
	std::cout << "Int: " << myData.myInt << std::endl;
	std::cout << "Char: " << myData.myChar << std::endl;
	std::cout << "Float: " << myData.myFloat << std::endl;
	std::cout << "Double: " << myData.myDouble << std::endl << std::endl;

	std::cout << "myDataPtrNew structure" << std::endl;
	std::cout << "Int: " << myDataPtrNew->myInt << std::endl;
	std::cout << "Char: " << myDataPtrNew->myChar << std::endl;
	std::cout << "Float: " << myDataPtrNew->myFloat << std::endl;
	std::cout << "Double: " << myDataPtrNew->myDouble << std::endl;



	// delete myZombiePtr;

	return (0);
}
