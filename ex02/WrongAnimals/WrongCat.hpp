#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		~WrongCat();
		WrongCat& operator=(WrongCat &from);
		void	makeSound(void) const;
};

#endif