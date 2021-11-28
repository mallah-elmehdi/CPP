#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie new_zmb(name);
	new_zmb.announce();
}
