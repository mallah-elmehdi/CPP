#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[ Cat constructor ]" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "[ Cat destructor ]" << std::endl;
}

Cat::Cat(const Cat& object)
{
	std::cout << "[ Cat copy constructor ]" << std::endl;
	this->type = object.type;
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << "I'm a cat" << std::endl;
}