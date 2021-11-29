#ifndef _WEAPON_HPP
#define _WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
		std::string         type;
	public:
		void                setType(std::string added_type);
		const std::string&  getType(void);
};

#endif