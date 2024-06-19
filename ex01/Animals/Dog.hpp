#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(std::string type);
		Dog(const Dog &from);
		~Dog();
		Dog& operator=(const Dog &from);
		
		Brain	*getBrain() const;
		void	makeSound(void) const;
};

#endif