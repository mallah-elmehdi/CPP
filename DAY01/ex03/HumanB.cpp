#include "HumanB.hpp"

// default constuctor
HumanB::HumanB(void)
{
	the_weapon = nullptr;
	std::cout << "===============> HumanB Contructor called" << std::endl;
}

HumanB::HumanB(std::string added_name)
{
	this->name = added_name;
	std::cout << "===============> HumanB Contructor called" << std::endl;
}

void    HumanB::attack(void)
{
	if (the_weapon != nullptr)
		std::cout << name << " attacks with his " << the_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon *wpn)
{
	this->the_weapon = wpn;
}

HumanB::~HumanB(void)
{
	std::cout << "===============> HumanB Destructor called (" << name << ")" << std::endl;
}