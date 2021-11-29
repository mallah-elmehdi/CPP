#include "HumanA.hpp"

HumanA::HumanA(Weapon& add_the_weapon) : the_weapon(add_the_weapon) {
	std::cout << "===============> HumanA Contructor called" << std::endl;
};

void    HumanA::attack(void)
{
	std::cout << name << " attacks with his " << the_weapon.getType() << std::endl;
}

void    HumanA::set_name(std::string added_name)
{
	name = added_name;
}

HumanA::~HumanA(void)
{
	std::cout << "===============> HumanA Destructor called (" << name << ")" << std::endl;
}