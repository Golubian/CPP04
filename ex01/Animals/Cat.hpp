#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "../Brain/Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(std::string type);
		Cat(const Cat &from);
		~Cat();
		Cat& operator=(const Cat &from);

		Brain	*getBrain() const;
		void	makeSound(void) const;
};

#endif