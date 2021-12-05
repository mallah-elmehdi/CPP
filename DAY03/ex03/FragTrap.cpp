#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("untitled", 100, 100, 30)
{
	std::cout << "[ FragTrap constructor ] : called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "[ FragTrap constructor ] : called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& object)
{
	(void)object;
	std::cout << "[ FragTrap copy constructor ] : called!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[ FragTrap destructor ] : called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives !!!" << std::endl;
}
