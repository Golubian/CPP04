#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Animal();
		Animal(std::string type);
		~Animal();
		Animal& operator=(Animal &from);
		void	makeSound(void);
};

#endif