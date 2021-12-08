#include "Zombie.hpp"

int main()
{
	Zombie *zmb;
	int N;

	N = 5;
	std::cout << std::endl << "* Dynamic allocation of "<< N << " objects *" << std::endl << std::endl;
	zmb = zombieHorde(N, "mehdi");
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie : "<< i << std::endl;
		zmb[i].announce();
	}
	std::cout << std::endl;
	delete[] zmb;
}