#ifndef _DIAMONDTRAP_HPP
#define _DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& object);
		~DiamondTrap(void);
		void attack(std::string const & target);
		void whoAmI(void);
};

#endif