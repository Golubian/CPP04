#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal A = Animal("Loup");
	Animal B = Animal("Chien");

	B = A;
	B.makeSound();
	A.makeSound();
}