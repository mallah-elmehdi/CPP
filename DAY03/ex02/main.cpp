#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap super_man("Super man");
	super_man.takeDamage(35);
	super_man.attack("Thanos");
	super_man.beRepaired(100);
	std::cout << std::endl;
	ScavTrap spider_man("Spider Man");
	spider_man.attack("Venom");
	spider_man.takeDamage(95);
	spider_man.beRepaired(60);
	spider_man.guardGate();
	std::cout << std::endl;
	FragTrap batman("Batman");
	batman.attack("Joker");
	batman.beRepaired(60);
	batman.takeDamage(95);
	batman.highFivesGuys();
	std::cout << std::endl;
	return (0);
}