#ifndef _SCAVTRAP_HPP
#define _SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& object);
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(std::string const & target);
		void guardGate(void);
};

#endif 
