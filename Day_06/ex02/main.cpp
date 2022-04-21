/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:26:41 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/21 20:26:42 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include <exception>

Base * generate(void)
{
	int res;
	Base *obj;
	srand(time(NULL));

	res = 1 + rand() % (3 - 1 + 1);
	switch (res)
	{
		case 1:
		{
			obj = new ClassA();
			break ;
		}
		case 2:
		{
			obj = new ClassB();
			break ;
		}
		case 3:
		{
			obj = new ClassC();
			break ;
		}
	}
	return (obj);	
}

void identify(Base* p)
{
	ClassA *ptrA;
	ClassB *ptrB;
	ClassC *ptrC;


	if ((ptrA = dynamic_cast<ClassA *>(p)) != NULL)
		std::cout << "The actual ctype of the object pointed to by p is \"A\"" << std::endl;
	else if ((ptrB = dynamic_cast<ClassB *>(p)) != NULL)
		std::cout << "The actual type of the object pointed to by p is \"B\"" << std::endl;
	else if ((ptrC = dynamic_cast<ClassC *>(p)) != NULL)
		std::cout << "The actual type of the object pointed to by p is \"C\"" << std::endl;
	else
		std::cout << "The actual type is unknown" << std::endl;
}

void identify(Base& p)
{
	try
	{
		ClassA &refA = dynamic_cast<ClassA &>(p);
		(void)refA;
		std::cout << "The actual ctype of the object pointed to by p is \"A\"" << std::endl;
	}
	catch (std::exception &bc)
	{
		
		;
		// std::cerr << "Error: " << bc.what() << std::endl;
	}
	try
	{
		ClassB &refB = dynamic_cast<ClassB &>(p);
		(void)refB;
		std::cout << "The actual ctype of the object pointed to by p is \"B\"" << std::endl;
	}
	catch(std::exception &bc)
	{
		;
		// std::cerr << "Error: " << bc.what() << std::endl;
	}
	try
	{
		ClassC &refC = dynamic_cast<ClassC &>(p);
		(void)refC;
		std::cout << "The actual ctype of the object pointed to by p is \"C\"" << std::endl;
	}
	catch(std::exception &bc)
	{
		;
		// std::cerr << "Error: " << bc.what() << std::endl;
	}
}


int main(void)
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete (ptr);
	return (0);
}
