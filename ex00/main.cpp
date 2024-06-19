#include "Animals/Animal.hpp"
#include "Animals/Dog.hpp"
#include "Animals/Cat.hpp"

#include "WrongAnimals/WrongAnimal.hpp"
#include "WrongAnimals/WrongCat.hpp"

int	main(void)
{
	const Animal *metaAnimal = new Animal();
	const Animal *dog = new Dog("Chien");
	const Animal *cat = new Cat("Chat");

	metaAnimal->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete metaAnimal;
	delete dog;
	delete cat;

	std::cout << std::endl << "Maintenant avec WrongAnimal!" << std::endl;

	const WrongAnimal *metaWrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat("MauvaisChaton");

	metaWrongAnimal->makeSound();
	wrongCat->makeSound();

	delete metaWrongAnimal;
	delete wrongCat;
}