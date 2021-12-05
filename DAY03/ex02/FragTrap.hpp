#ifndef _FRAGTRAP_HPP
#define _FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap& object);
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void);
};

#endif 