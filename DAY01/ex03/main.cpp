#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon wpn;
	Weapon wpn2;
	
	wpn.setType("KABOUSS");
	wpn2.setType("bazouga");
	
	HumanA hmnA(wpn);
	hmnA.set_name("MEHDI");
	hmnA.attack();
	HumanB hmnB(&wpn2);
	hmnB.set_name("MALALH");
	hmnB.attack();
}