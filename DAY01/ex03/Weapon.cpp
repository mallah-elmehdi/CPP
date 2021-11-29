#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "===============> Weapon Contructor called" << std::endl;
}

void Weapon::setType(std::string added_type)
{
	type = added_type;
}

const std::string& Weapon::getType(void)
{
	const std::string& typeREF = type;
	return (typeREF);
}

Weapon::~Weapon(void)
{
	std::cout << "===============> Weapon Destructor called (" << type << ")" << std::endl;
}