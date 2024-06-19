#include "Cat.hpp"

Cat::Cat() : _brain(new Brain())
{
	_type = "Cat";
	std::cout << C_GR << "+Cat Cat (Default)" << C_RS << std::endl;
}

Cat::Cat(std::string type) : _brain(new Brain())
{
	_type = type;
	std::cout << C_GR << "+Cat " + type << C_RS << std::endl;
}

Cat::Cat(const Cat &from)
{
	std::cout << C_GR << "+Cat" << C_RS;
	*this = from;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << C_RE << "-Cat " + _type << C_RS << std::endl;
}

Cat& Cat::operator=(const Cat &from)
{
	std::cout << C_CY << " copied from " << from._type << C_RS << std::endl;
	if (this != &from)
	{
		_brain = new Brain(*(from._brain));
		_type = from._type;
	}
	return *this;
}


Brain	*Cat::getBrain() const
{
	return _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}