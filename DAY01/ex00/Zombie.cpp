#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

//default constructor
Zombie::Zombie(void)
{
	//im not doing anything in the default constructor
}

//constructor with param
Zombie::Zombie(std::string added_name)
{
	this->name = added_name;
}

//destructor
Zombie::~Zombie(void)
{
	std::cout << "The instance of the Zombie " << name << " has been detroyed" << std::endl;
}