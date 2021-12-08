#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zmb = new Zombie[5];
	for (int i = 0; i < N; i++)
		zmb[i].set_name(name);
	return (zmb);
}