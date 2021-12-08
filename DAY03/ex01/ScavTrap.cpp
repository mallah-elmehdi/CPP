#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "[ ScavTrap constructor ] : called!" << std::endl;
	this->name = "untitled";
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "[ ScavTrap constructor ] : called!" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& object)
{
	std::cout << "[ ScavTrap copy constructor ] : called!" << std::endl;
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
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
