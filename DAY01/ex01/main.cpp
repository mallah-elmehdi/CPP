#include "Zombie.hpp"

int main()
{
	Zombie *zmb;
	int N;

	N = 5;
	zmb = zombieHorde(N, "mehdi");
	for (int i = 0; i < N; i++)
	{
		zmb[i].announce();
	}
	delete[] zmb;
}