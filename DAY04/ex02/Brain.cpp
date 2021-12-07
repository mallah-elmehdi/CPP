#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "[ Brain constructor ]" << std::endl;
	this->ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = "an_idea";
	}
}

Brain::~Brain(void)
{
	std::cout << "[ Brain destructor ]" << std::endl;
	delete [] this->ideas;
}

Brain::Brain(const Brain& object)
{
	std::cout << "[ Brain copy constructor ]" << std::endl;
	this->ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = object.ideas[i];
	}
}
