#ifndef _HUMANB_HPP
#define _HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *the_weapon;
		std::string name;
	public:
		HumanB(void);
		HumanB(Weapon *add_the_weapon);
		void set_name(std::string added_name);
		void attack(void);
};

#endif