#include "HumanA.hpp"

void    HumanA::attack(void)
{
	std::cout << name << " attacks with his " << the_weapon.getType() << std::endl;
}

void    HumanA::set_name(std::string added_name)
{
	name = added_name;
}
