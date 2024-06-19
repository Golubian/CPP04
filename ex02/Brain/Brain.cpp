#include "Brain.hpp"

Brain::Brain()
{
	std::cout << C_GR << "+Brain &" << this << C_RS << std::endl;
}

Brain::~Brain()
{
	std::cout << C_RE << "-Brain &" << this << C_RS << std::endl;
}


Brain::Brain(const Brain &from)
{
	std::cout << C_GR << "+Brain &" << this << C_RS;
	*this = from;
}

Brain& Brain::operator=(const Brain &from)
{
	if (this != &from)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = from._ideas[i];
		}
	}
	std::cout << C_CY << " copied from " << &from << C_RS << std::endl;
	return *this;
}

std::string Brain::getIdea(int index)
{
	if (index >= 0 && index < 100)
		return (_ideas)[index];
	return "";
}

void Brain::setIdea(std::string idea, int index)
{
	if (index >= 0 && index < 100)
		(_ideas)[index] = idea;
}