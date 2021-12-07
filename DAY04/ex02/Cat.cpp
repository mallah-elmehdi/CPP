#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[ Cat constructor ]" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "[ Cat destructor ]" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& object)
{
	std::cout << "[ Cat copy constructor ]" << std::endl;
	this->type = object.type;
	this->brain = new Brain(*object.brain);
	//this->brain = object.brain;
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << "i'm an cat" << std::endl;
}

void Cat::get_brain_address(void)
{
	std::cout << this->brain << std::endl;
}