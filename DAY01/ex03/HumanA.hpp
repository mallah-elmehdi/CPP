#ifndef _HUMANA_HPP
#define _HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& the_weapon;
		std::string name;
	public:
		HumanA(Weapon& add_the_weapon) : the_weapon(add_the_weapon) {};
		void set_name(std::string added_name);
		void attack(void);
};

#endif