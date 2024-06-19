#include "Dog.hpp"

Dog::Dog() : _brain(new Brain())
{
	_type = "Dog";
	std::cout << C_GR << "+Dog Dog (Default)" << C_RS << std::endl;
}

Dog::Dog(std::string type) : _brain(new Brain())
{
	_type = type;
	std::cout << C_GR << "+Dog " + type << C_RS << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << C_RE << "-Dog " + _type << C_RS << std::endl;
}

Dog::Dog(const Dog &from)
{
	std::cout << C_GR << "+Dog" << C_RS;
	if (this != &from)
  		*this = from;
}

Dog& Dog::operator=(const Dog &from)
{
	std::cout << C_CY << " copied from " << from._type << C_RS << std::endl;
	if (this != &from)
	{
		_brain = new Brain(*(from._brain));
		_type = from._type;
	}
	return *this;
}

Brain	*Dog::getBrain() const
{
	return _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}