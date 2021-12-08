#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "[ DiamondTrap constructor ] : called!" << std::endl;
	this->name = "untitled";
	ClapTrap::name = this->name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "[ DiamondTrap constructor ] : called!" << std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitpoints = FragTrap::hitpoints;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& object)
{
	std::cout << "[ DiamondTrap copy constructor ] : called!" << std::endl;
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[ DiamondTrap destructor ] : called!" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap I'm " << this->name << " my grandparent ClapTrap name is " << ClapTrap::name << std::endl;
} 