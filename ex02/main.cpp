#include "Animals/Animal.hpp"
#include "Animals/Dog.hpp"
#include "Animals/Cat.hpp"

int	main(void)
{
	Cat *cat = new Cat("Kitty");
	//Animal* animal = new Animal("new");

	cat->makeSound();
	Cat *cat2 = new Cat(*cat);
	delete cat2;
	delete cat;
}