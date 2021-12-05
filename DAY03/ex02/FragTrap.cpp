#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "[ FragTrap constructor ] : called!" << std::endl;
	this->name = "untitled";
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "[ FragTrap constructor ] : called!" << std::endl;
	this->name = name;
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& object)
{
	std::cout << "[ FragTrap copy constructor ] : called!" << std::endl;
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
}

FragTrap::~FragTrap(void)
{
	std::cout << "[ FragTrap destructor ] : called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives !!!" << std::endl;
}
