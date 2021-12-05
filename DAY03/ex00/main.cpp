#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap super_man("Super man");
	super_man.takeDamage(35);
	super_man.attack("Joker");
	super_man.beRepaired(100);
	std::cout << std::endl;

	return (0);
}