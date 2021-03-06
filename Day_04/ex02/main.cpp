/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <okushnir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:58:56 by okushnir          #+#    #+#             */
/*   Updated: 2022/04/19 20:59:01 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"


int main(void)
{
	// const AAnimal* meta = new AAnimal();
	// AAnimal am;
	const Dog* j = new Dog();
	const Cat* i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	delete i;
	delete j;
	return 0;
}
