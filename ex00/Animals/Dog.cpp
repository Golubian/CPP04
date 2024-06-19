#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "+Dog Dog (Default)" << std::endl;
}

Dog::Dog(std::string type)
{
	_type = type;
	std::cout << "+Dog " + type << std::endl;
}

Dog::~Dog()
{
	std::cout << "-Dog " + _type << std::endl;
}

Dog& Dog::operator=(Dog &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << "Dog copied from " << from._type << std::endl;
	return *this;
}


void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}