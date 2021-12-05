#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap super_man("Super man");
	super_man.takeDamage(35);
	super_man.attack("Joker");
	super_man.beRepaired(100);
	std::cout << std::endl;
	ScavTrap spider_man("Spider Man");
	spider_man.attack("Venom");
	spider_man.takeDamage(95);
	spider_man.beRepaired(60);
	spider_man.guardGate();
	std::cout << std::endl;
	return (0);
}