#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "+WrongCat WrongCat (Default)" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
	_type = type;
	std::cout << "+WrongCat " + type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "-WrongCat " + _type << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &from)
{
	if (this != &from)
		_type = from._type;
	std::cout << "WrongCat copied from " << from._type << std::endl;
	return *this;
}


void	WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}