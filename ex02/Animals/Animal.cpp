#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << C_GR << "+Animal Animal (Default)" << C_RS << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << C_GR << "+Animal " + type << C_RS << std::endl;
}

Animal::~Animal()
{
	std::cout << C_RE << "-Animal " + _type << C_RS << std::endl;
}

Animal& Animal::operator=(Animal &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << C_CY << "Animal copied from " << from._type << C_RS << std::endl;
	return *this;
}


void	Animal::makeSound(void) const
{
	std::cout << "ERROR: ClassAnimal makeSound called" << std::endl;
}