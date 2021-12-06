#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "[ Animal constructor ]" << std::endl;
	this->type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "[ Animal destructor ]" << std::endl;
}

Animal::Animal(const Animal& object)
{
	std::cout << "[ Animal copy constructor ]" << std::endl;
	this->type = object.type;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "i'm an animal" << std::endl;
}