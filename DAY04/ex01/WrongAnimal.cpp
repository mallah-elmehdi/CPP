#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "[ WrongAnimal constructor ]" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[ WrongAnimal destructor ]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object)
{
	std::cout << "[ WrongAnimal copy constructor ]" << std::endl;
	this->type = object.type;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "i'm an WrongAnimal" << std::endl;
}