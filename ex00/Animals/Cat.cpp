#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "+Cat Cat (Default)" << std::endl;
}

Cat::Cat(std::string type)
{
	_type = type;
	std::cout << "+Cat " + type << std::endl;
}

Cat::~Cat()
{
	std::cout << "-Cat " + _type << std::endl;
}

Cat& Cat::operator=(Cat &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << "Cat copied from " << from._type << std::endl;
	return *this;
}


void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}