# include "AAnimal.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"


int main()
{
	// const AAnimal* meta = new AAnimal();
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