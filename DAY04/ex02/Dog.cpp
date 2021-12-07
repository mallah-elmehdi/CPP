#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[ Dog constructor ]" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "[ Dog destructor ]" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& object)
{
	std::cout << "[ Dog copy constructor ]" << std::endl;
	this->type = object.type;
	this->brain = new Brain(*object.brain);
	//this->brain = object.brain;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
	std::cout << "i'm a dog" << std::endl;
}

void Dog::get_brain_address(void)
{
	std::cout << this->brain << std::endl;
}