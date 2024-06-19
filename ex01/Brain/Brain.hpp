#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include "../Colors.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain(const Brain &from);
		~Brain();
		Brain& operator=(const Brain &from);

		std::string getIdea(int index);
		void setIdea(std::string idea, int index);
};

#endif