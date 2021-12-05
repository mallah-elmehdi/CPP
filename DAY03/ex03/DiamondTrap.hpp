#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& object);
		DiamondTrap(std::string child_name, int child_hitpoints, int child_energy_points, int child_attack_damage);
		~DiamondTrap(void);
};

#endif