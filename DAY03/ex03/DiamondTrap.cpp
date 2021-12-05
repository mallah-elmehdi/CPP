#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("untitled", 100, 100, 30)
{
	std::cout << "[ DiamondTrap constructor ] : called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "[ DiamondTrap constructor ] : called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& object)
{
	(void)object;
	std::cout << "[ DiamondTrap copy constructor ] : called!" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[ DiamondTrap destructor ] : called!" << std::endl;
}
