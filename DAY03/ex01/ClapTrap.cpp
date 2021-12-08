#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "[ ClapTrap constructor ] : called!" << std::endl;
	this->name = "untitled";
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& object)
{
	std::cout << "[ ClapTrap copy constructor ] : called!" << std::endl;
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "[ ClapTrap parameterized constructor ] : called!" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ ClapTrap destructor ] : called!" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target << ", causing " << this->hitpoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " has took a damage this a " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " got repaired with a " << amount << " points of energy!" << std::endl;
}
