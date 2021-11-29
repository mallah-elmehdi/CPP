#include "HumanB.hpp"

// default constuctor
HumanB::HumanB(void)
{
	the_weapon = nullptr;
}

HumanB::HumanB(Weapon *add_the_weapon)
{
	the_weapon = add_the_weapon;
}

void    HumanB::attack(void)
{
	if (the_weapon != nullptr)
		std::cout << name << " attacks with his " << the_weapon->getType() << std::endl;
}

void    HumanB::set_name(std::string added_name)
{
	name = added_name;
}