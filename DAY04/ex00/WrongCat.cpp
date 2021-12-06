#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "[ WrongCat constructor ]" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "[ WrongCat destructor ]" << std::endl;
}

WrongCat::WrongCat(const WrongCat& object)
{
	std::cout << "[ WrongCat copy constructor ]" << std::endl;
	this->type = object.type;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::makeSound(void) const
{
	std::cout << "I'm a WrongCat" << std::endl;
}