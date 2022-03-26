# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal *arr[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			arr[i] = new Cat();
		else
			arr[i] = new Dog();

	}

	std::cout << arr[3]->getType() << " " << std::endl;
	std::cout << arr[8]->getType() << " " << std::endl;
	arr[3]->makeSound(); //will output the cat sound!
	arr[8]->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;

	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete arr[i];
	}
	return 0;
}