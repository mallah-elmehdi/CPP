#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap spider_man("Spider Man");
	ClapTrap super_man("Super man");

	std::cout << std::endl;
	spider_man.attack("Venom");
	spider_man.takeDamage(3);
	spider_man.attack("Venom");
	spider_man.takeDamage(9);
	spider_man.beRepaired(10);
	spider_man.attack("Venom");
	std::cout << std::endl;
	super_man.attack("Joker");
	super_man.takeDamage(35);
	super_man.attack("Joker");
	super_man.takeDamage(99);
	super_man.beRepaired(100);
	super_man.attack("Joker");
	std::cout << std::endl;

	return (0);
}