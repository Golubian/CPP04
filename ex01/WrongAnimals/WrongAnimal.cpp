#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "+WrongAnimal WrongAnimal (Default)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "+WrongAnimal " + type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "-WrongAnimal " + _type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << "WrongAnimal copied from " << from._type << std::endl;
	return *this;
}


void	WrongAnimal::makeSound(void) const
{
	std::cout << "ERROR: ClassWrongAnimal makeSound called" << std::endl;
}