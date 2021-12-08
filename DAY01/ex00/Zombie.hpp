#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string added_name);
		void	announce(void);
		~Zombie();
};

// -----
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
// -----

#endif