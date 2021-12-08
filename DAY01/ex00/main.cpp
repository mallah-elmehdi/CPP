#include "Zombie.hpp"

int main()
{
	std::cout << std::endl << "* Dynamic allocation *" << std::endl << std::endl;
	Zombie *zmb;
	zmb = newZombie("mehdi");
	zmb->announce();
	delete zmb;
	std::cout << std::endl << "* Stack Allocation *" << std::endl << std::endl;
	randomChump("mallah");
	std::cout << std::endl;
}