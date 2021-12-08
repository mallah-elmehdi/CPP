#ifndef _HUMANA_HPP
#define _HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& the_weapon;
		std::string name;
	public:
		HumanA(std::string added_name, Weapon& add_the_weapon);
		void attack(void);
		~HumanA(void);
};

#endif