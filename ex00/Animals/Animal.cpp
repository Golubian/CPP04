#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "+Animal Animal (Default)" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "+Animal " + type << std::endl;
}

Animal::~Animal()
{
	std::cout << "-Animal " + _type << std::endl;
}

Animal& Animal::operator=(Animal &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << "Animal copied from " << from._type << std::endl;
	return *this;
}


void	Animal::makeSound(void) const
{
	std::cout << "ERROR: ClassAnimal makeSound called" << std::endl;
}