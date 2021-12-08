#include "HumanA.hpp"

HumanA::HumanA(std::string added_name, Weapon& add_the_weapon) : the_weapon(add_the_weapon)
{
	this->name = added_name;
	std::cout << "===============> HumanA Contructor called" << std::endl;
};

void    HumanA::attack(void)
{
	std::cout << name << " attacks with his " << the_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "===============> HumanA Destructor called (" << name << ")" << std::endl;
}