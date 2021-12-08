#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap& object);
		FragTrap(std::string name);
		~FragTrap();
		void attack(std::string const & target);
		void highFivesGuys(void);
};

#endif 
