#include "Animals/Animal.hpp"
#include "Animals/Dog.hpp"
#include "Animals/Cat.hpp"

int	main(void)
{
	Cat *cat = new Cat("Kitty");

	Brain *catBrain = cat->getBrain();
	catBrain->setIdea("Hello World!", 0);

	{
	Cat cat2 = Cat(*cat);
	cat2.makeSound();
	catBrain = cat2.getBrain();
	std::cout << catBrain->getIdea(0) << std::endl;
	}
	
	delete cat;
}