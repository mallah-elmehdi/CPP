#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[ Dog constructor ]" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "[ Dog destructor ]" << std::endl;
}

Dog::Dog(const Dog& object)
{
	std::cout << "[ Dog copy constructor ]" << std::endl;
	this->type = object.type;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
	std::cout << "I'm a dog" << std::endl;
}