#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string type);
		~Cat();
		Cat& operator=(Cat &from);
		void	makeSound(void) const;
};

#endif