#include "DiamondTrap.hpp"

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
	FragTrap batman("Batman");
	batman.beRepaired(60);
	batman.takeDamage(95);
	batman.highFivesGuys();
	std::cout << std::endl;
	DiamondTrap dr_strange("Batman");
	dr_strange.beRepaired(60);
	dr_strange.takeDamage(95);
	dr_strange.highFivesGuys();
	std::cout << std::endl;
	return (0);
}