#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("untitled", 100, 50, 20)
{
	std::cout << "[ ScavTrap constructor ] : called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "[ ScavTrap constructor ] : called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& object)
{
	(void)object;
	std::cout << "[ ScavTrap copy constructor ] : called!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[ ScavTrap destructor ] : called!" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->hitpoints << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

//void ScavTrap::beRepaired(unsigned int amount)
//{
//	this->attack_damage -= this->attack_damage == 0 ? 0 : amount;
//	this->energy_points = amount < 10 ? amount : 10;
//	std::cout << this->name << " got repaired with a " << amount << " points of energy!" << std::endl;
//}
