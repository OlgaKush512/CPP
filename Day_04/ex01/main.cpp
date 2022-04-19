/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:57:09 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:57:12 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"


int main()
{
	std::cout << "_____________________Dog copy constructor_____________________" << std::endl << std::endl;
	Dog gav;
	std::cout << std::endl;

	Dog gav1(gav);
	std::cout << std::endl;
	gav = gav1;
	std::cout << std::endl;

	std::cout << "_____________________Cat copy constructor_____________________" << std::endl << std::endl;
	Cat miou;
	std::cout << std::endl;

	Cat miou1(miou);
	std::cout << std::endl;
	miou = miou1;
	std::cout << std::endl;

	std::cout << "_____________________other tests from subject_____________________" << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	int N = 5;
	Animal *arr[N];

	for (int i = 0; i < N; i++)
	{
		if (i < N/2)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();
	}
	std::cout << std::endl;
	std::cout << arr[0]->getType() << " " << std::endl;
	std::cout << std::endl;

	std::cout << arr[N - 1]->getType() << " " << std::endl;
	std::cout << std::endl;
	arr[0]->makeSound();
	std::cout << std::endl;
	arr[N - 1]->makeSound();
	std::cout << std::endl;
	meta->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < N; i++)
	{
		delete arr[i];
	}
	return 0;
}
