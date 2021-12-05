#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("untitled"), hitpoints(10), energy_points(10), attack_damage(0)
{
	std::cout << "[ ClapTrap constructor ] : called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& object)
{
	this->name = object.name;
	this->hitpoints = object.hitpoints;
	this->energy_points = object.energy_points;
	this->attack_damage = object.attack_damage;
	std::cout << "[ ClapTrap copy constructor ] : called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitpoints(10), energy_points(10), attack_damage(0)
{
	this->name = name;
	std::cout << "[ ClapTrap parameterized constructor ] : called!" << std::endl;
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
	this->attack_damage += amount;
	this->energy_points -= amount;
	std::cout << "ClapTrap " << this->name << " has took a damage this a " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->attack_damage -= this->attack_damage == 0 ? 0 : amount;
	this->energy_points = amount < 10 ? amount : 10;
	std::cout << "ClapTrap " << this->name << " got repaired with a " << amount << " points of energy!" << std::endl;
}

ClapTrap::ClapTrap(std::string child_name, int child_hitpoints, int child_energy_points, int child_attack_damage) 
	: name(child_name), hitpoints(child_hitpoints), energy_points(child_energy_points), attack_damage(child_attack_damage)
{
	std::cout << "[ ClapTrap with child initilization constructor ] : called!" << std::endl;
}