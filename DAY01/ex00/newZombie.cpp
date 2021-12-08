#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *new_zmb = new Zombie(name);
	return (new_zmb);
}
