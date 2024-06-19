#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
# include "../Colors.hpp"

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal& operator=(Animal &from);
		virtual void	makeSound(void) const;
};

#endif