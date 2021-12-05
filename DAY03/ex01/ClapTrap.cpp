#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "[ Constructor ] : called!" << std::endl;
	this->name = "untitled";
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap& object)
{
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
	std::cout << "[ Copy constructor ] : called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << "[ Parameterized constructor ] : called!" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ Destructor ] : called!" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << this->name << " attack " << target << ", causing " << this->hitpoints << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->attack_damage += amount;
	this->energy_points -= amount;
	std::cout << this->name << " has took a damage this a " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->attack_damage -= this->attack_damage == 0 ? 0 : amount;
	this->energy_points = amount < 10 ? amount : 10;
	std::cout << this->name << " got repaired with a " << amount << " points of energy!" << std::endl;
}

