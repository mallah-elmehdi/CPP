#include "Weapon.hpp"

void Weapon::setType(std::string added_type)
{
	type = added_type;
}

const std::string& Weapon::getType(void)
{
	const std::string& typeREF = type;
	return (typeREF);
}