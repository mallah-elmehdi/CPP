#include "Zombie.hpp"

int main()
{
	Zombie *zmb;

	zmb = newZombie("mehdi");
	zmb->announce();
	delete zmb;
	randomChump("mallah");
}