#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap iron_man("Iron man");
	std::cout << std::endl;
	iron_man.takeDamage(35);
	iron_man.attack("Thanos");
	iron_man.beRepaired(100);
	std::cout << std::endl;

	return (0);
}