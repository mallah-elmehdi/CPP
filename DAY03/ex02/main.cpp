#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap iron_man("Iron man");
	std::cout << std::endl;
	iron_man.takeDamage(35);
	iron_man.attack("Thanos");
	iron_man.beRepaired(100);
	std::cout << std::endl;

	ScavTrap spider_man("Spider Man");
	std::cout << std::endl;
	spider_man.attack("Venom");
	spider_man.takeDamage(95);
	spider_man.beRepaired(60);
	spider_man.guardGate();
	std::cout << std::endl;

	FragTrap batman("Batman");
	std::cout << std::endl;
	batman.attack("Joker");
	batman.beRepaired(60);
	batman.takeDamage(95);
	batman.highFivesGuys();
	std::cout << std::endl;
	return (0);
}