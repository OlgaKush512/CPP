# include "Animal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	Animal am;
	std::cout << std::endl;

	const Animal* meta = new Animal();
	std::cout << std::endl;

	const Animal* dog = new Dog();
	std::cout << std::endl;

	const Animal* cat = new Cat();
	std::cout << std::endl;

	const WrongAnimal* w_cat = new WrongCat();
	std::cout << std::endl;

	const WrongCat* vrai_w_cat = new WrongCat();
	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << w_cat->getType() << " " << std::endl;
	std::cout << vrai_w_cat->getType() << " " << std::endl;

	std::cout << std::endl;

	dog->makeSound(); //will output the cat sound!
	cat->makeSound();
	w_cat->makeSound();
	vrai_w_cat->makeSound();
	meta->makeSound();
	delete dog;
	delete cat;
	delete w_cat;
	delete vrai_w_cat;
	delete meta;
	return 0;
}